#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0; 
    else if (n == 2 || n == 3)  return 1;
    else if (n % 2 == 0 || n % 3 == 0) return 0;      
    
    int i = 5;
    int w = 2;
    while (i * i <= n) {
        if (n % i == 0) return 0;
        i += w;
        w = 6 - w;
    } 
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (is_prime(n))  printf("YES\n");      
        else  printf("NO\n");      
    }
    return 0;
}