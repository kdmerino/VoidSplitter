#include "hello-greet.h"
#include "cpp/src/hello-world-request.pb.h"
#include <string>

std::string get_greet(const cpp::HelloWorldRequest& request) {
  const std::string name = request.has_name() ? request.name() : "world";
  return "Hello " + name;
}

std::string get_greet(const std::string& who) {
  return "Hello " + who;
}

