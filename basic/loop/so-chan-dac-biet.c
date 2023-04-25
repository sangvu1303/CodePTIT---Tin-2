#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char N[18];
        scanf("%s", N);
        int len = strlen(N);
        if (N[len-1] % 2 != 0) printf("NO\n"); 
            continue;// Kiểm tra chữ số cuối cùng của N
        int i;
        for (i = 0; i < len; i++) { // Kiểm tra từng chữ số của N
            if (N[i] % 2 != 0) printf("NO\n");
                break;
        }
        if (i == len) printf("YES\n");// Nếu tất cả các chữ số đều là số chẵn     
    }
    return 0;
}