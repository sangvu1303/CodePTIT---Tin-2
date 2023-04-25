#include <stdio.h> 
#include <string.h> 

void tachChuoi(char a[], char b[], char c[]) { 
    int n = strlen(a), dem1 = 0, dem2 = 0, i = 0; 
    while (n > i) { 
        if (i < n / 2) { 
            b[dem1] = a[i]; 
            dem1++; 
        } else { 
            c[dem2] = a[i]; 
            dem2++; 
        } 
        i++; 
    } 
} 

void dao(char s[]) { 
    char s1[505]; 
    int n = strlen(s), i; 
    for (i = 0; i < n; i++) { 
        s1[n - 1 - i] = s[i]; 
    } 
    s1[n] = '\0'; 
    strcpy(s, s1); 
} 

void cong(char a[], char b[], char tong[]) { 
    int i, j, t, d = 0; 
    int n = strlen(a); 
    int m = strlen(b); 
    dao(a), dao(b); 
    strcat(a, "0"); 
    for (i = 0; i <= n - m; i++) 
        strcat(b, "0"); 
    for (i = 0; i <= n; i++) { 
        t = (a[i] - '0') + (b[i] - '0') + d; 
        d = t / 10; 
        t %= 10; 
        tong[i] = '0' + t; 
    } 
    if (tong[n] == '0') tong[n] = '\0'; 
    else tong[n + 1] = '\0'; 
    dao(tong); 
    puts(tong); 
} 

int main() { 
    char a[205]; 
    int t, n, i = 0; 
    scanf("%s", &a); 
    while (strlen(a) > 1) { 
        char b[105] = {},c[105] = {},tong[105]; 
        tachChuoi(a,b,c); 
        cong(c,b,tong); 
        strcpy(a,tong); 
    } 
}