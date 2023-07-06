load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_proto_grpc//cpp:defs.bzl", "cpp_grpc_compile")

proto_library(
    name = "hello-world-proto",
    srcs = ["hello-world.proto"],    
)

cc_proto_library(
    name = "hello-world-cc-proto",
    deps = [":hello-world-proto"],
    visibility = ["//cpp/src:__pkg__"],
)

proto_library(
    name = "hello-world-request-proto",
    srcs = ["hello-world-request.proto"],    
)

cc_proto_library(
    name = "hello-world-request-cc-proto",
    deps = [":hello-world-request-proto"],
    visibility = ["//cpp/src:__pkg__"],
)

cpp_grpc_compile(
    name = "hello-world-cc-proto-compile",
    protos = [":hello-world-proto"],
)
