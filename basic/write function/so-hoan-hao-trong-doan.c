#include<stdio.h>
#include<stdbool.h>

bool check(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) sum+=i;
    }
    if(sum==n) return true;
    return false;
}
    
int main(){
    int n,a,b;
    scanf("%d%d",&a,&b);
	if(b>a){
        for(n=a;n<=b;n++){ 			
            if(check(n)) printf("%d ",n);
        }
    }else{
        for(n=b;n<=a;n++){ 			
            if(check(n)) printf("%d ",n);
        }
    }  
    return 0;        
}