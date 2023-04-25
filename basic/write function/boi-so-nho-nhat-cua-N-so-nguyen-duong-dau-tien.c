#include<stdio.h> 

long long UCLN(long long a,long long b){ 
    if(b==0) return a; 
    else return UCLN(b,a%b); 
} 

long long BCNN(long long a,long long b){ 
    return a*b/UCLN(a,b); 
} 

int main(){ 
    long long t; scanf("%lld",&t); 
    while(t--){ 
        long long n; scanf("%lld",&n); 
        long long bcnn=1; 
        for(int i=2;i<=n;i++){ 
            bcnn=BCNN(bcnn,i); 
        } 
        printf("%lld\n",bcnn); 
    } 
}