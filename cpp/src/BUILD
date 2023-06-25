load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "stage1-hello-world",
    srcs = ["hello-world.cc"],
)

cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
)

cc_binary(
    name = "stage2-hello-world",
    srcs = ["hello-world-v2.cc"],
    deps = [
        ":hello-greet",
    ],
)

cc_binary(
    name = "stage3-hello-world",
    srcs = ["hello-world-v3.cc"],
    deps = [
        ":hello-greet",
        "//lib:hello-time",
    ],
)
