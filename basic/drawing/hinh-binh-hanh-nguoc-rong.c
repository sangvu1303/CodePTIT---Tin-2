#include <stdio.h>
int main (){
	int n,m;
	scanf("%d%d",&n,&m);
	for ( int i=0; i<n; i++){
		for ( int j=0; j<i; j++)
			printf("~");
		for ( int k=0; k<m; k++)
			if (i==0 || i==n-1 || k==0 ||k==m-1)  printf("*");
			else printf(".");
			printf("\n");
	}
}
