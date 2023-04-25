#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int matrix[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j >= i)  matrix[i][j] = j - i;
            else matrix[i][j] = 0;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}