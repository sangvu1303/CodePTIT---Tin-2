#include <stdio.h>
int main() {
	int n,i;scanf("%d",&n);
	int a[n];	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int even[n],odd[n],cnt1 = 0,cnt2 = 0;
	for(i = 0;i < n;i++){
		if(a[i] % 2 == 0) {
			even[cnt1] = a[i];
			++cnt1;
		}else{
			odd[cnt2] = a[i];
			++cnt2;
		}
	}
	for(i=0;i<cnt1;i++){
		printf("%d ",even[i]);
	}
	printf("\n");
	for(i=0;i<cnt2;i++){
		printf("%d ",odd[i]);
	}
	return 0;
}