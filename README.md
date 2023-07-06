# VoidSplitter

Mini programs of various languages intra-communicating through topological arrangements of the RPC net; built with a common build pattern.

View Accessors on protos for usage.

Note to generate protos use:

```bash

protoc -I=cpp/protos/ --cpp_out=cpp/src/ cpp/protos/hello-world-request.proto
protoc -I=cpp/protos/ --cpp_out=cpp/src/ cpp/protos/hello-world.proto
protoc -I=cpp/protos/ --grpc_out=cpp/src/ --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` cpp/protos/hello-world.proto
```
