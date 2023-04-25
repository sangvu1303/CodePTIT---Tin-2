#include<stdio.h> 

int main() { 
    int n,m,k,x,den=0; scanf("%d %d %d",&n,&m,&k); 
    int cs[n+1]; 
    for(int i = 1; i <= n; i++) cs[i] = 0; 
    for (int i=0;i<m;i++) { 
        int d,c; scanf("%d",&x); 
        d=(x-k<1?1:x-k); 
        c=(x+k>n?n:x+k); 
        for (int j=d;j<=c;j++) cs[j]=1; 
    } 

    printf("\n"); 
    int i=1; 
    while (i<=n) { 
        if (!cs[i]) { 
            den+=1; 
            i+=2*k+1; 
        } else i++; 
    } 
    printf("%d",den); 
}