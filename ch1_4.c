#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main() {
    if(access("test.txt", R_OK) == -1) {
        perror("test.txt");
        exit(1);
    }
    printf("file exists.\n");
    return 0;
}