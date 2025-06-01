#include <stdio.h>

struct sample {
    int a;      // usually 4 bytes
    char b;     // usually 1 byte
    float c;    // usually 4 bytes
};

int main() {
    int size_a = sizeof(int);
    int size_b = sizeof(char);
    int size_c = sizeof(float);
    
    int total_size = size_a + size_b + size_c;
    int actual_struct_size = sizeof(struct sample);

    printf("Sum of member sizes: %d bytes\n", total_size);
    printf("Actual size of structure: %d bytes\n", actual_struct_size);

    return 0;
}
