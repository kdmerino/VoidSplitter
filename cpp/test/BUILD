load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "hello-greet-test",
    srcs = ["hello-greet-test.cc"],
    deps = [
        "@com_google_googletest//:gtest_main",
        "//cpp/src:hello-greet",
    ],
)

