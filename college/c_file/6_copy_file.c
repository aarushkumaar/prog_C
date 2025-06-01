#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *sourceFile, *targetFile;
    char ch;

    // Check if user provided exactly two file names
    if (argc != 3) {
        printf("Usage: %s <source_file> <target_file>\n", argv[0]);
        exit(1);
    }

    // Open source file in read mode
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error: cannot open source file '%s'\n", argv[1]);
        exit(1);
    }

    // Open target file in write mode
    targetFile = fopen(argv[2], "w");
    if (targetFile == NULL) {
        printf("Error: cannot create target file '%s'\n", argv[2]);
        fclose(sourceFile);
        exit(1);
    }

    // Copy character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
