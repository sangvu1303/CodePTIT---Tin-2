#include<stdio.h>
int main(){
	int n,dg,i;
	int t;
	scanf("%d",&t);
	int A[n];
	while(t--){
		scanf("%d",&A[i]);
		int sum=0;
		while(A[i]>0){
			dg=A[i]%10;
			A[i]/=10;
			sum += dg;
		}
		if(sum%10==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}