#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        
        int odd_count = 0, even_count = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            n /= 10;
        }
        
        printf("%d %d\n", odd_count, even_count);
    }
    return 0;
}