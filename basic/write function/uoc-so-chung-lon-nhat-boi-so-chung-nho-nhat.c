#include <stdio.h> 
long long UCLN(long long a, long long b) { 
    while (b > 0) { 
        long long c = a % b; 
        a = b; 
        b = c; 
        } 
    return a; 
} 

int main() { 
    long long a, b; 
    scanf("%lld%lld", &a, &b); 
    long long x = UCLN(a, b); 
    long long y = (a * b) / x; 
    printf("%lld\n%lld", x, y);
}