#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    strcpy(str1, "Hello, ");
    strcpy(str2, "World!");

    printf("\nChoose Operation:\n");
    printf("1. Find length of first string\n");
    printf("2. Concatenate both strings\n");
    printf("3. Reverse first string\n");
    printf("4. Copy first string to second\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of str1: %lu\n", strlen(str1));
            break;
        case 2:
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        case 3:
            strcpy(temp, str1);
            strrev(temp);  // Note: strrev is not standard in all compilers
            printf("Reversed str1: %s\n", temp);
            break;
        case 4:
            strcpy(str2, str1);
            printf("str2 after copying: %s\n", str2);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
