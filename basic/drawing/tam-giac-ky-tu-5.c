#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=n-1;i>=0;i--){
		int init = i;
		for(j=1;j<=i+1;j++){
			printf("%c",64+init);
			++init;
		}
		printf("\n");
	}	
}