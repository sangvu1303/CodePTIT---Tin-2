#include<stdio.h> 
int main(){ 
    long long m,n,p,q; 
    scanf("%lld%lld%lld%lld",&m,&n,&p,&q); 
    long long a[m][n],b[n][p],c[p][q],d[m][p]; 
    // nhập ma trận a
    for(long long i=0;i<m;i++){ 
        for(long long j=0;j<n;j++){ 
            scanf("%lld",&a[i][j]); 
        } 
    } 
    // nhập ma trận b
    for(long long i=0;i<n;i++){ 
        for(long long j=0;j<p;j++){ 
            scanf("%lld",&b[i][j]); 
        } 
    } 
    // nhập ma trận c
    for(long long i=0;i<p;i++){ 
        for(long long j=0;j<q;j++){ 
            scanf("%lld",&c[i][j]); 
        } 
    } 
    // tính ma trận d
    for(long long i=0;i<m;i++){ 
        for(long long j=0;j<p;j++){ 
            d[i][j]=0; 
            for(long long k=0;k<n;k++){ 
                d[i][j]+=a[i][k]*b[k][j]; 
            } 
        } 
    } 
    // in ma trận d
    for(long long i=0;i<m;i++){ 
        for(long long j=0;j<q;j++){ 
            long long h = 0; 
            for(long long k=0;k<p;k++){ 
                h += d[i][k]*c[k][j]; 
            } 
            printf("%lld ",h); 
        }                            
        printf("\n"); 
    }
}