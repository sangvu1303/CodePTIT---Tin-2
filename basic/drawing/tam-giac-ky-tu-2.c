#include<stdio.h>

int main(){
	int n,i,j;scanf("%d",&n);
	for(i=1;i<=n;i++){
		int init = 2*i - 1;
		for(j=1;j<=n-i+1;j++){
			printf("%c",64+init);
			init += 2;
		}
		printf("\n");
	}
	return 0;
}