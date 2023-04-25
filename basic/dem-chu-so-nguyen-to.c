#include <stdio.h>
#include <string.h> 
#include <math.h>

int nto(int n){ 
    if(n<2) return 0; 
    for(int i=2;i<=sqrt(n);i++){ 
        if(n%i==0) return 0; 
    } 
    return 1; 
} 

int main(){ 
    char n[18]; scanf("%s", &n); 
    int cnt[10]={0}; 
    for(int i=0;i<strlen(n);i++){ 
        cnt[n[i]-'0']++; 
    } 
    for(int i=0;i<strlen(n);i++){ 
        if(cnt[n[i]-'0']>0 && nto(n[i]-'0')==1){ 
            printf("%d %d\n", n[i]-'0', cnt[n[i]-'0']);
            cnt[n[i]-'0']=0; 
        } 
    } 
}