#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include "hello-greet.h"
#include "cpp/lib/hello-time.h"
#include "cpp/src/hello-world-request.pb.h"

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_join.h"

// Flags
ABSL_FLAG(std::string, who, "world", "Greeting message name");

// Main
int main(int argc, char** argv) {
  absl::ParseCommandLine(argc, argv);
  std::string who = absl::GetFlag(FLAGS_who);
  cpp::HelloWorldRequest request;
  request.set_name(who);
  std::cout << "Hello " << request.name() << std::endl;  
  print_localtime();
  std::cout << std::endl;

  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << std::endl;

  return 0;
}

