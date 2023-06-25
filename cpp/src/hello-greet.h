#ifndef SRC_HELLO_GREET_H_
#define SRC_HELLO_GREET_H_

#include <string>
#include "cpp/src/hello-world-request.pb.h"

std::string get_greet(const std::string &greet);
std::string get_greet(const cpp::HelloWorldRequest &greet);

#endif

