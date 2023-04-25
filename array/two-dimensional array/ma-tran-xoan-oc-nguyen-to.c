#include <stdio.h> 
#include <math.h> 

// Renamed the function to is_prime to improve readability
int is_prime(int n) { 
    int i; 
    if (n < 2) return 0; 
    for (i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) return 0; 
    } 
    return 1; 
} 

// Renamed the function to get_nth_prime to improve readability
int get_nth_prime(int n) { 
    int i = 2, primes[1000] = {0}; 
    while (n > 0) { 
        if (is_prime(i)) n--; i++; 
    } 
    return i-1; 
} 

void generate_spiral(int n) { 
    int spiral[101][101], layer = 0, count = 1, i, j; 
    while (layer <= n / 2) { 
        for (i = layer; i < n - layer; i++) 
            spiral[layer][i] = get_nth_prime(count++); 
        for (i = layer + 1; i < n - layer; i++) 
            spiral[i][n - layer - 1] = get_nth_prime(count++); 
        for (i = n - layer - 2; i >= layer; i--) 
            spiral[n - layer - 1][i] = get_nth_prime(count++); 
        for (i = n - layer - 2; i > layer; i--) 
            spiral[i][layer] = get_nth_prime(count++); 
        layer++; 
    } 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) 
            printf("%2d ", spiral[i][j]); 
        printf("\n"); 
    } 
} 

int main() { 
    int t, i; scanf("%d", &t); 
    for (i = 1; i <= t; i++) { 
        printf("Test %d:\n", i); 
        int n; scanf("%d", &n); 
        generate_spiral(n); 
    } 
    return 0;
}
