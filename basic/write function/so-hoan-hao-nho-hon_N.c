#include<stdio.h>
#include<math.h>

int check(int n){
    int i, sum = 1;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0) sum=sum+(i+n/i);
    }
    if (sum==n) return 1;
    else return 0;
}

int main(){
	int n, i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){ 			
        if(check(i)==1) printf("%d ",i);
    } 
    return 0;        
}