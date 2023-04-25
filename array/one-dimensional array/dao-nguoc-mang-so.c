#include<stdio.h>

int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// đảo mảng chính xác
	int l = 0,r = n - 1;
	while(l<=r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;--r;
	}
	// hoặc làm mẹo thế này :
	// for(i=n-1;i>=0;i--){
	// 	printf("%d ",a[i]);
	// }	
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;	
}