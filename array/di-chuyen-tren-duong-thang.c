#include<stdio.h> 
#include<math.h> 

int main(){ 
    long long a , b ; 
    while(scanf("%lld%lld",&a,&b) == 2){ 
        if(a > b ){ 
            long long temp = a; 
            a = b; 
            b = temp; 
        } 
        long long res = 0; 
        long long k = b - a; 
        long long n = (int)sqrt(k)/1; 
        long long tong = n*n; 
        res = n*2 -1; 
        k -= tong; 
        while(k != 0){ 
            if(n <= k){ 
                long long temp = k / n; 
                k -= temp * n; 
                res += temp; 
            } 
            n--; 
        } 
        printf("%d \n",res); 
    } 
    return 0; 
} 