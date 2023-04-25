#include<stdio.h> 

int main(){ 
    int t; scanf("%d", &t); 
    while(t--){ 
        long i=2, n; 
        scanf("%ld", &n); 
        while(i<=n/i){ 
            if(n%i==0) n/=i; 
            if(n%i!=0) i++; 
        } 
        printf("%ld\n", n); 
    } 
}