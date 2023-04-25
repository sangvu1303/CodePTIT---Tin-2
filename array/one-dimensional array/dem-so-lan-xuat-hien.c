#include<stdio.h>

int cnt[1000001];

int main(){
	int n;scanf("%d",&n);
	int a[n],res[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]] != 0){
			printf("%d %d\n",a[i],cnt[a[i]]);
			cnt[a[i]] = 0;
		}
	}
	return 0;
}