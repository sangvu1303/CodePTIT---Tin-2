#include <stdio.h>
#include <string.h>

int cnt[30005];

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			cnt[a[i]]++;
		}
		int maxF = 0;
		for(int i=0;i<n;i++){
			if(cnt[a[i]]>maxF) maxF = cnt[a[i]];
		}
		for(int i=0;i<n;i++){
			if(cnt[a[i]]==maxF){
				printf("%d ",a[i]);
				cnt[a[i]] = 0;
			}
		}
		printf("\n");
		memset(cnt,0,sizeof(cnt));
	}
	return 0;
}