#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]>a[j-1]){
				int temp = a[j];
				a[j ]= a[j-1];
				a[j-1] = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
return 0;	
}