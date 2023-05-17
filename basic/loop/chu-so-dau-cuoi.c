#include<stdio.h>
#include<math.h>

int main(){
	int n,a,dg;scanf("%d",&n);
	a=n;
	while(n>0){
		dg=n%10;
		n/=10;}				
    printf("%d %d",dg,a%10);
}