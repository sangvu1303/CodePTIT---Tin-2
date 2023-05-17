#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=n-i) printf("~");
			else if( j==n || j==n-i+1 || i==1 || i==n) printf("*");
            else printf(" ");
		}
		printf("\n");	
	}	
}