#include <stdio.h> 

int main() { 
    long n,a,b,min1=1e6,min2=min1; 
    scanf("%d",&n); 
    while(n--) { 
        scanf("%ld%ld",&a,&b); 
        if(min1>a) min1=a; 
        if(min2>b) min2=b; 
    } 
    printf("%ld",min1*min2); 
}