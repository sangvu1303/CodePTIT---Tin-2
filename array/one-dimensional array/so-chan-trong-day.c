#include<stdio.h>
int main(){
	int t,n,i;
	int a[100];
	scanf("%d",&t);
    while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			if(a[i] % 2 == 0) printf("%d ",a[i]);
		printf("\n");
	}	
	return 0;
}