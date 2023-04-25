#include<stdio.h>

int main(){
	int n,m,p; scanf("%d%d",&n,&m);
	int a[n],b[m];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	scanf("%d",&p);
	// làm mẹo cho nhanh
	for(i=0;i<p;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<m;i++){
		printf("%d ",b[i]);
	}
	for(i=p;i<n;i++){
		printf("%d ",a[i]);
	}
return 0;	
}