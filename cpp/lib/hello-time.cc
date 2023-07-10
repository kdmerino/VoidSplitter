#include "cpp/lib/hello-time.h"

#include <iostream>
#include <ctime>
#include <string>

void print_localtime() {
    std::cout << get_localtime() << std::endl;
}

std::string get_localtime() {
    std::time_t result = std::time(nullptr);
    return std::asctime(std::localtime(&result));
}