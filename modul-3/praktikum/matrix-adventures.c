#include <stdio.h>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void transposeMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int transpose[MAX_COLS][MAX_ROWS];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = factorial(matrix[i][j]);
        }
    }

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

void display(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[MAX_ROWS][MAX_COLS];

    scanf("%d", &rows);
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, rows, cols);

    return 0;
}
