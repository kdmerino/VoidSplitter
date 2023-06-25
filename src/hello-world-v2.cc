#include "hello-greet.h"
#include <string>
#include <iostream>

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) who = argv[1];
  std::cout << get_greet(who) << std::endl;

  return 0;
}

