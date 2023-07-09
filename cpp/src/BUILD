load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_binary(
    name = "stage1-hello-world",
    srcs = ["hello-world.cc"],
)

cc_library(
    name = "hello-greet",
    srcs = [
        "hello-greet.cc",
    ],
    deps = [
        ":hello-world-request-cc-proto",
    ],
    hdrs = ["hello-greet.h"],
    visibility = ["//cpp/test:__pkg__"],
)

cc_binary(
    name = "stage2-hello-world",
    srcs = ["hello-world-v2.cc"],
    deps = [
        ":hello-greet",
        "//cpp/lib:hello-time",
    ],
)

proto_library(
    name = "hello-world-request-proto",
    srcs = ["hello-world-request.proto"],
)

cc_proto_library(
    name = "hello-world-request-cc-proto",
    deps = [":hello-world-request-proto"],
)

cc_binary(
    name = "stage3-hello-world",
    srcs = ["hello-world-v3.cc"],
    deps = [
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/strings",
        "@com_google_protobuf//:protobuf",
        ":hello-greet",
        "//cpp/lib:hello-time",
        ":hello-world-request-cc-proto",
    ],
)
