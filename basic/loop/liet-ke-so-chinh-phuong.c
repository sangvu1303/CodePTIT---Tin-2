#include<stdio.h>
#include<math.h>

int main(){
    int m, n, x, y, i;

    // Input the values of m and n
    scanf("%d%d", &m, &n);

    // Check if m is a perfect square
    if (sqrt(m) == (int)sqrt(m)) {
        x = sqrt(n);
        y = sqrt(m);
    } else {
        x = sqrt(n);
        y = sqrt(m) + 1;
    }

    // Output the number of perfect squares between m and n
    printf("%d\n", x - y + 1);

    // Output the perfect squares between m and n
    for (i = y; i <= x; i++) {
        printf("%d\n", i * i);
    }

    return 0;
}
