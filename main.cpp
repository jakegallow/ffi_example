#include <cstdio>

extern "C" unsigned int grpc_server();

int main() {
    printf("im cpp");
    grpc_server();

    return 0;
}
