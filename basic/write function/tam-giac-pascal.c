#include<stdio.h>

int comb(int n,int k){
    int C[n+1][n+1],i,j;
    C[0][0]=1;
    for(i=1;i<=n;i++){
        C[i][0]=1;
        C[i][i]=1;
        for(j=1;j<i;j++){
            C[i][j]=C[i-1][j-1]+C[i-1][j];
        }
    }
    return C[n][k];
}

int main(){
    int n;
    scanf("%d",&n);
    int i,k;
    for(i=0;i<n;i++){
        for(k=0;k<=i;k++){
            printf("%d ",comb(i,k) );
        }
        printf("\n");
    } 
return 0;	
}