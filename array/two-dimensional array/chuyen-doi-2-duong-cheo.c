#include <stdio.h>
int main(){
	int n,m,i,j,A[100][100],a,b;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)  printf("%d ",A[i][n-i-1]);
			else if(j==n-i-1)  printf("%d ",A[i][n-j-1]);
			else  printf("%d ",A[i][j]);			
		}
		printf("\n");
	}
	return 0;
}