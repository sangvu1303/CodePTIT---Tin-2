#include <stdio.h>
#include <stdbool.h>

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result; //tính giai thừa
}

bool isStrongNumber(int num) {
    int temp = num, sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == num);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;
    for (int i = start; i <= end; i++) {
        if (isStrongNumber(i)) printf("%d ",i);
    }
    return 0;
}