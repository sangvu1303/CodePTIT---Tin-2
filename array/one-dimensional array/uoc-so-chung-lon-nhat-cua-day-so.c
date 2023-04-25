#include<stdio.h> 

long long bcnn(int a, int b) { 
    long long bc=a*b; 
    while(a*b!=0) { 
        if(a>b) a%=b; 
        else b%=a; 
    } 
    return bc/(a+b); 
} 
int main() { 
    int t; scanf("%d", &t); 
    while(t--) { 
        int n; scanf("%d", &n); 
        int a[n]; 
        for(int i=0;i<n;i++) scanf("%d", &a[i]); 
        int b[n+1]; int k=0; int tmp=1; 
        for(int i=0;i<n;i++) { 
            b[k]=bcnn(tmp,a[i]); 
            tmp=a[i]; 
            k++; 
        } 
        b[n]=a[n-1]; 
        for(int i=0;i<=n;i++) printf("%d ", b[i]); 
        printf("\n"); 
    } 
}