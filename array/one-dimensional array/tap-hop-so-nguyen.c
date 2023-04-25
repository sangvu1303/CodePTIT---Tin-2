#include<stdio.h> 

int main(){ 
    int n,m; scanf("%d%d",&n,&m); 
    int a[n],b[m]; 
    int sua1[1000] = {0}; 
    int sua2[1000] = {0}; 
    for(int i = 0; i < n; i++){ 
        scanf("%d",&a[i]); 
        sua1[a[i]] = 1; 
    } 
    for(int i = 0; i < m; i++){ 
        scanf("%d",&b[i]); 
        sua2[b[i]] = 1; 
    } 
    for(int i = 0; i < 1000; i++){ 
        if(sua1[i] == 1 && sua2[i] == 1) printf("%d ",i); 
    } 
    printf("\n"); 
    for(int i = 0; i < 1000; i++){ 
        if(sua1[i] == 1 && sua2[i] == 0) printf("%d ",i); 
    } 
    printf("\n"); 
    for(int i = 0; i < 1000; i++){
        if(sua1[i] == 0 && sua2[i] == 1) printf("%d ",i); 
    } 
    return 0; 
}