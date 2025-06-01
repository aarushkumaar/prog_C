#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[][MAX_SIZE], int B[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrix(int A[][MAX_SIZE], int B[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void transposeMatrix(int matrix[][MAX_SIZE], int transposed[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void multiplyMatrix(int A[][MAX_SIZE], int B[][MAX_SIZE], int result[][MAX_SIZE], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int transA[MAX_SIZE][MAX_SIZE], transB[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter rows and columns for matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("\nInput for Matrix A:\n");
    inputMatrix(A, rows, cols);

    printf("\nInput for Matrix B:\n");
    inputMatrix(B, rows, cols);

    printf("\nMatrix A:\n");
    displayMatrix(A, rows, cols);

    printf("\nMatrix B:\n");
    displayMatrix(B, rows, cols);

    // Addition
    addMatrix(A, B, result, rows, cols);
    printf("\nAddition of A and B:\n");
    displayMatrix(result, rows, cols);

    // Subtraction
    subtractMatrix(A, B, result, rows, cols);
    printf("\nSubtraction of A and B (A - B):\n");
    displayMatrix(result, rows, cols);

    // Transpose
    transposeMatrix(A, transA, rows, cols);
    transposeMatrix(B, transB, rows, cols);
    printf("\nTranspose of Matrix A:\n");
    displayMatrix(transA, cols, rows);
    printf("\nTranspose of Matrix B:\n");
    displayMatrix(transB, cols, rows);

    // Multiplication (only if cols of A == rows of B)
    if (cols == rows) {
        multiplyMatrix(A, B, result, rows, cols, cols);
        printf("\nMultiplication of A and B:\n");
        displayMatrix(result, rows, cols);
    } else {
        printf("\nMatrix multiplication not possible with given dimensions.\n");
    }

    return 0;
}
