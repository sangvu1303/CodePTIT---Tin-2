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
			if(i==a-1)  printf("%d ",A[b-1][j]);
			else if(i==b-1)  printf("%d ",A[a-1][j]);
			else  printf("%d ",A[i][j]);			
		}
		printf("\n");
	}
	return 0;
}