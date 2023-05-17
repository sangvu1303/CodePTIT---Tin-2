#include<stdio.h>
int main(){
	int n,i,j;scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2==0) printf("%d",2*j);		
			else printf("%d",2*j-1);	
		}
		printf("\n");
	}		
}