#include <assert.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv) {
    assert(argc >= 3);
    int n1 = strtol(argv[1], nullptr, 0);
    int n2 = strtol(argv[2], nullptr, 0);

    for (int i = n1; i <= n2; ++i) {
        printf("%d\n", i);
    }
}
