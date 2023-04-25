#include <stdio.h>
#include <stdbool.h>

bool isFibonacci(int n) {
    int a = 0, b = 1, c;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }
    if (b == n) return true;
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isFibonacci(n)) printf("1");   
    else printf("0"); 
    return 0;
}