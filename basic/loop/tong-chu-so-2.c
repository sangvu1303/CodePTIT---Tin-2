#include<stdio.h>
int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		int sum=0;
		scanf("%d",&n);
		while(n>0){
			sum=sum+n%10;
			n=n/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}