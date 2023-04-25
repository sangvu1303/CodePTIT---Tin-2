#include <stdio.h>
#include <string.h>

int main() {
    int t;scanf("%d", &t);
    while (t--) {
        char s[101];
        scanf("%s", s);
        int len = strlen(s), count = 1;
        for (int i = 0; i < len; i++) {
            if (s[i] == s[i+1] && count < 9) {
                count++;
            } else {
                printf("%c%d", s[i], count);
                count = 1;
            }
        }
        printf("\n");
    }
    return 0;
}