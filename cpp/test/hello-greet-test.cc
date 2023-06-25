#include "gtest/gtest.h"
#include "cpp/src/hello-greet.h"

TEST(HelloGreetTest, GetGreet) {
    EXPECT_EQ(get_greet("Bazel"), "Hello Bazel");
}

