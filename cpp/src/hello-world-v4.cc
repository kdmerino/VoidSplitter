#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include "hello-greet.h"
#include "cpp/lib/hello-time.h"

#include "absl/flags/flag.h"
#include "absl/strings/str_join.h"

// Flags
ABSL_FLAG(std::string, who, "world", "Greeting message name");

// Main
int main(int argc, char** argv) {
  std::string who = absl::GetFlag(FLAGS_who);
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  std::cout << std::endl;

  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << std::endl;

  return 0;
}

