#include<stdio.h>

int main(){
	int n,i,j;scanf("%d",&n);
	for(i=1;i<=n;i++){
		int cnt;
		if(i%2==0) cnt = i*(i+1)/2;
		else cnt = i*(i+1)/2 - i + 1;
		for(j=1;j<=i;j++){
			if(i%2==0) printf("%d ",cnt--);
			else printf("%d ",cnt++);
		}
		printf("\n");
	}
	return 0;
}