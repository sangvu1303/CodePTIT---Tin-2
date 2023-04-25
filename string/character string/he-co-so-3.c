#include <stdio.h>
#include <string.h>

int isValidNumber(char *number) {
    int length = strlen(number);
    for (int i = 0; i < length; i++) {
        if (number[i] != '0' && number[i] != '1' && number[i] != '2') {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int testCases;scanf("%d", &testCases);
    while (testCases--) {
        char number[19];
        scanf("%s", number);

        if (isValidNumber(number)) printf("YES\n");         
        else printf("NO\n");           
    }
    return 0;
}