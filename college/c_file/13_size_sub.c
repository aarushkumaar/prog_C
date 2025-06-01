#include <stdio.h>

struct Sample {
    int a;
    char b;
    float c;
};

int main() {
    struct Sample s[2];

    // Subtracting addresses of consecutive elements
    int size = (char*)&s[1] - (char*)&s[0];

    printf("Size of structure (by address subtraction): %d bytes\n", size);

    return 0;
}
