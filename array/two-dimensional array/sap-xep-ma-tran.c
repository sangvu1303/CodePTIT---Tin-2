#include<stdio.h>

int main (){
	int m,n,i,j,M[100][100],e,f;
	int t; scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&M[i][j]);
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				for(int e=i;e<m;e++){
					for(int f=j;f<n;f++){
						if(M[i][j]>M[e][f]){
							int t=M[i][j];
							M[i][j]=M[e][f];
							M[e][f]=t;
						}
					}
				}
			}
		}
		printf("Test %d:\n",i+1);

		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				printf("%d ",M[i][j]);
			}
			printf("\n");
		}	
	}
	return 0;
}