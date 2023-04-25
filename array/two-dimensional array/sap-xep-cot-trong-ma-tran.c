#include <stdio.h>
#include <stdlib.h>

void sort_column(int A[100][100], int N, int i) {
    int temp[N];
    for (int row = 0; row < N; row++) {
        temp[row] = A[row][i - 1];
    }
    for (int j = 0; j < N - 1; j++) {
        for (int k = j + 1; k < N; k++) {
            if (temp[j] > temp[k]) {
                int swap = temp[j];
                temp[j] = temp[k];
                temp[k] = swap;
            }
        }
    }
    for (int row = 0; row < N; row++) {
        A[row][i - 1] = temp[row];
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int N, M, i;
        scanf("%d %d %d", &N, &M, &i);
        int A[100][100];
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < M; col++) {
                scanf("%d", &A[row][col]);
            }
        }
        sort_column(A, N, i);
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < M; col++) {
                printf("%d ", A[row][col]);
            }
            printf("\n");
        }
    }
    return 0;
}