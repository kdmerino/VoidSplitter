load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_binary(
    name = "stage1-hello-world",
    srcs = ["hello-world-v1.cc"],
)

cc_library(
    name = "hello-greet",
    srcs = [
        "hello-greet.cc",
    ],
    deps = [
        "//cpp/protos:hello-world-request-cc-proto",
    ],
    hdrs = ["hello-greet.h"],
    visibility = ["//cpp/test:__pkg__"],
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
        "//cpp/lib:hello-time",
    ],
)

cc_binary(
    name = "stage4-hello-world",
    srcs = ["hello-world-v4.cc"],
    deps = [
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/strings",
        "@com_google_protobuf//:protobuf",
        ":hello-greet",
        "//cpp/lib:hello-time",
        "//cpp/protos:hello-world-request-cc-proto",
    ],
)

cc_binary(
    name = "stage5-hello-world",
    srcs = ["hello-world-v4.cc"],
    deps = [
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/strings",
        "@com_google_protobuf//:protobuf",
        "@com_github_grpc_grpc//:grpc++",
        "//cpp/lib:hello-time",
    ],
)

cc_library(
    name = "route_guide_helper",
    srcs = [
        "helper.cc",
        "helper.h",
    ],
    defines = ["BAZEL_BUILD"],
    deps = [
        "//:grpc++",
    ],
)

