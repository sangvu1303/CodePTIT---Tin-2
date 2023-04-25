#include <stdio.h>

long UocSo;

void USCLN(long a, long b){
    long temp;
    while(b!=0){
        temp = a % b;
        a = b;
        b = temp;
    }
    UocSo = a;
}

int main(){
    long a, b;
    scanf("%ld%ld", &a, &b);
    if(a>0 && b>0){
        USCLN(a,b);
        printf("%ld\n%lld", UocSo, (long long) a*b/UocSo);
    }
    return 0;
}


