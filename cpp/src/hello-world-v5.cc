#include <ctime>
#include <iostream>
#include <string>
#include <vector>

#include "cpp/lib/hello-time.h"
#include "cpp/src/hello-world.grpc.pb.h"

#include "grpc/grpc.h"
#include "grpcpp/security/server_credentials.h"
#include "grpcpp/server.h"
#include "grpcpp/server_builder.h"
#include "grpcpp/server_context.h"
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

// Flags
ABSL_FLAG(std::string, who, "world", "Greeting message name");
ABSL_FLAG(std::string, mode, "server", "Mode: one of ['server', 'client']")


// Server
namespace server {
  class GreeterImpl final : cpp::Greeter::Service {
    public:
      grpc::Status SayHello(grpc::ServerContext* context, 
        const cpp::HelloWorld* request, cpp::HelloReply* response) {
          std::string greet = "Welcome " + request->name;
          int i = 0;
          for (const std::string& last_name : request->last_names) {
            const string pre = i++ < request->last_names.size ? " " : "";
            greet += pre + last_name;
          }
          response->response = (i == 0 && request->name == "" )
            ? "Hello world!" : greet;
          std::time_t epoch = std::time(0); // End response time.
          response->timestamp = (intmax_t) epoch;
      }
  }

  void Run() {
    std::string server_address("0.0.0.0:50051");
    GreeterImpl service();

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
  }
}
// End of namespace: Server


// Client


// Main
int main(int argc, char** argv) {
  // Verify that the version of the library that we linked against is
  //   // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  absl::ParseCommandLine(argc, argv);
  std::string who = absl::GetFlag(FLAGS_who);

  cpp::HelloWorldRequest request;
  request.set_name(who);

  std::cout << "Hello " << request.name() << std::endl;  
  print_localtime();
  std::cout << std::endl;

  std::vector<std::string> v = {"sample", "vector", "entry"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << std::endl;

  // Delete all global objects allocated by libprotobuf
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}

