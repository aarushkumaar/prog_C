#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    printf("Size of union: %lu bytes\n", sizeof(data));
    return 0;
}
