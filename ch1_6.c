#include <stdio.h>

int main(int argc, int **argv) {
    int n;
    printf("argc = %d\n", argc);
    for (n=0; n<argc; n++) {
        printf("argv[%d] = %s\n", n, argv[n]);
    }
    return 0;
}