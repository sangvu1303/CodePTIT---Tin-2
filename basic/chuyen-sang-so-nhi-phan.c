#include<stdio.h> 

int main(){ 
    int n; scanf("%d", &n); 
    int a[100]; 
    int x=1,dem=0;  
    if(n==0) printf("0"); 
    while(n > 0){ 
        int m = n%2; 
        a[x] = m; 
        n /= 2; 
        x++; dem++; 
    } 
    for(int i=dem; i>0; i--){ 
        printf("%d", a[i]); 
    } 
}
