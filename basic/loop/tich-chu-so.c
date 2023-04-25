#include <stdio.h>

int main() {
    int number, digit, product = 1;
    scanf("%d", &number);
    for (; number > 0; number /= 10) {
        digit = number % 10;
        product *= digit;
    }
    printf("%d", product);
    return 0;
}
