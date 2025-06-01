#include <stdio.h>

struct Sample {
    int a;
    char b;
    float c;
};

int main() {
    struct Sample s;

    printf("Size of structure: %lu bytes\n", sizeof(s));

    return 0;
}
