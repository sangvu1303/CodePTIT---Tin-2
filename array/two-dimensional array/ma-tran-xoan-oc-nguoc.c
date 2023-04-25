#include <stdio.h>

void printMatrix(int matrix[][20], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void createSpiralMatrix(int n, int matrix[][20]) {
    int value = n * n;
    int i, j, layer;
    for (layer = 0; layer < (n + 1) / 2; layer++) {
        for (i = layer; i < n - layer; i++) {
            matrix[layer][i] = value--;
        }
        for (j = layer + 1; j < n - layer; j++) {
            matrix[j][n - layer - 1] = value--;
        }
        for (i = n - layer - 2; i >= layer; i--) {
            matrix[n - layer - 1][i] = value--;
        }
        for (j = n - layer - 2; j > layer; j--) {
            matrix[j][layer] = value--;
        }
    }
}

int main() {
    int t, n, i, j;
    int matrix[20][20];
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d", &n);
        createSpiralMatrix(n, matrix);
        printf("Test %d:\n", i);
        printMatrix(matrix, n);
    }
    return 0;
}