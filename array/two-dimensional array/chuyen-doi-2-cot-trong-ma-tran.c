#include <stdio.h>
int main(){
	int n,m,i,j,A[100][100],a,b;
	scanf("%d%d",&n,&m);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}

	scanf("%d%d",&a,&b);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(j==a-1)
			printf("%d ",A[i][b-1]);
			else if(j==b-1)
			printf("%d ",A[i][a-1]);
			else
			printf("%d ",A[i][j]);	
		}
		printf("\n");
	}
	return 0;
}