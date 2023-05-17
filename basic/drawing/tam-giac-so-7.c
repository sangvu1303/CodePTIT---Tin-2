#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int init = i;
		for(j=1;j<=i;j++){
			printf("%2d ",init);
			init += n - j;
		}
		printf("\n");
	}
}