#include <stdio.h>

#define MAX_SIZE 10

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Masukkan elemen matriks %dx%d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Matriks:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];

    printf("Masukkan jumlah baris: ");
    scanf("%d", &rows);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Ukuran matriks tidak valid.\n");
        return 1;
    }

    inputMatrix(A, rows, cols);
    inputMatrix(B, rows, cols);

    addMatrices(A, B, C, rows, cols);

    printf("Matriks A:\n");
    printMatrix(A, rows, cols);
    printf("Matriks B:\n");
    printMatrix(B, rows, cols);
    printf("Hasil penjumlahan (Matriks C):\n");
    printMatrix(C, rows, cols);

    return 0;
}
