#include<stdio.h>
int main(){
	int n,i,j;scanf("%d",&n);
	for(i=1;i<=n;i++){
		int cnt = 1;
		for(j=1;j<=2*i-1;j++){
			if(j<i) printf("%d",cnt), cnt +=2;
			else printf("%d",cnt), cnt -=2;
		}
		printf("\n");
	}
}