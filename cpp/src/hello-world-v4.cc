#include <ctime>
#include <iostream>
#include <string>
#include <vector>

#include "cpp/lib/hello-time.h"
#include "cpp/protos/hello-world.pb.h"
#include "cpp/protos/hello-world.grpc.pb.h"

#include "grpc/grpc.h"
// grpcpp: server
#include "grpcpp/security/server_credentials.h"
#include "grpcpp/server.h"
#include "grpcpp/server_builder.h"
#include "grpcpp/server_context.h"
// grpcpp: client
#include <grpcpp/security/credentials.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>

// absl :-]
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

// Flags
ABSL_FLAG(std::string, host_ip, "0.0.0.0", "Server host ip address");
ABSL_FLAG(std::string, port, "50051", "Server host port");
ABSL_FLAG(std::string, who, "world", "Greeting message name");
ABSL_FLAG(std::string, mode, "server", "Mode: one of ['server', 'client']");


namespace server {
  class GreeterImpl final : public cpp::Greeter::Service {
    public:
      grpc::Status SayHello(grpc::ServerContext* context, 
        const cpp::HelloWorld* request, cpp::HelloReply* response) override {
          std::cout << "Request received=" << request->DebugString() << std::endl;
          std::string greet = "Welcome " + request->name();
          int i = 0;
          for (const std::string& last_name : request->last_names()) {
            const std::string pre = i++ < request->last_names().size() ? " " : "";
            greet += pre + last_name;
          }
          response->set_response((i == 0 && request->name() == "")
            ? "Hello world!" : greet);
          response->set_timestamp(get_localtime());

          return grpc::Status::OK;
      }
  };

  void Run() {
    const std::string& host_ip = absl::GetFlag(FLAGS_host_ip);
    const std::string& port = absl::GetFlag(FLAGS_port);
    const std::string server_address(host_ip + ":" + port);
    GreeterImpl service;

    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "####################################" << std::endl;
    std::cout << "  Starting GreeterServer..." << std::endl;
    std::cout << "  Server listening on: " << server_address << std::endl;
    server->Wait();
  }
}
// End of namespace: server 

// Client
namespace client {
  const std::string& LOCAL = "localhost";

  class GreeterClient {
    public:
      GreeterClient(std::shared_ptr<grpc::Channel> channel_1)
        : stub_(cpp::Greeter::NewStub(channel_1)) {
          std::cout << "####################################" << std::endl;
          std::cout << "  Starting GreeterClient..." << std::endl;
      }

      void SayHello() {
        std::cout << "SayHello initiated...\n";
        grpc::ClientContext context;
        const cpp::HelloWorld request = HelloWorldRequest();
        cpp::HelloReply reply;

        grpc::Status status = stub_->SayHello(&context, request, &reply);
        if (status.ok()) {
          std::cout << "Request signed by server at "
            << reply.response() << std::endl;
        } else {
          std::cout << "Request failed... Server says <<<"
            << status.error_code() << "; "
            << status.error_details() << "; "
            << status.error_message() << "; "
            << ">>>" << std::endl;
        }
      }

    private:
      const cpp::HelloWorld HelloWorldRequest() {
        cpp::HelloWorld request;
        request.set_name("kdmerino");
        request.set_timestamp(get_localtime());
        return request;
      }

      std::unique_ptr<cpp::Greeter::Stub> stub_;
  };

  void Run() {
    const std::string& host_ip = absl::GetFlag(FLAGS_host_ip);
    const std::string& port = absl::GetFlag(FLAGS_port);
    const std::string host_address(host_ip + ":" + port);
    GreeterClient greeter(
      grpc::CreateChannel(host_address,
                          grpc::InsecureChannelCredentials()));
    greeter.SayHello();
  }
}
// End of namespace: client

// Main
int main(int argc, char** argv) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  absl::ParseCommandLine(argc, argv);
  std::string who = absl::GetFlag(FLAGS_who);
  std::string mode = absl::GetFlag(FLAGS_mode);

  if (!mode.compare("server")) {
    server::Run();
  } else if (!mode.compare("client")) {
    client::Run();
  } else {
    std::cout << "Unknown mode chosen; " << 
      "Mode: one of ['server', 'client']" << std::endl;
  }

  // Delete all global objects allocated by libprotobuf
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}
