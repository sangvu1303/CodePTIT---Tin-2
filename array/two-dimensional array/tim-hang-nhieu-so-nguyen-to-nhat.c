#include <stdio.h>

int isPrime(int n) { // kiểm tra số n có phải số nguyên tố không
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, max_prime_count = 0, max_row_num = 0;
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int prime_count = 0;
        for (int j = 0; j < n; j++) {
            if (isPrime(arr[i][j])) {
                prime_count++;
            }
        }
        if (prime_count > max_prime_count) {
            max_prime_count = prime_count;
            max_row_num = i;
        }
    }

    printf("%d\n", max_row_num + 1);
    for (int j = 0; j < n; j++) {
        if (isPrime(arr[max_row_num][j])) {
            printf("%d ", arr[max_row_num][j]);
        }
    }

    return 0;
}