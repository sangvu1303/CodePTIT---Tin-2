#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int init = 1;
		for(j=1;j<=2*i-1;j++){
			if(j<i) printf("%c",63+init), init += 2;
			else printf("%c",63+init), init -= 2;
		}
		printf("\n");
	}
}