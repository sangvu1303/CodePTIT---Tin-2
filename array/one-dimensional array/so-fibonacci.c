#include<stdio.h>

int main(){
	long long F[100];
	F[1] = 1;F[2] = 1;
	for(int i=3;i<=92;i++){
		F[i] = F[i-1] + F[i-2];
	}
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		printf("%lld\n",F[n]);
	}
}	