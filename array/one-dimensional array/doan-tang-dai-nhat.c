#include<stdio.h>

int main(){
	int t;scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d", &a[i]);
		int res = 1,b[n],cnt = 0,dem = 1;
		b[0] = 0; cnt = 1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]) ++dem;
			else dem = 1;
			if(dem>res){
				res = dem;
				b[0] = i+1-res;
				cnt = 1;
			}
			else if(dem==res){
				b[cnt] = i+1-res;
				++cnt;
			}
		}
		printf("Test %d:\n",i);
		printf("%d\n",res);
		for(int i=0;i<cnt;i++){
			for(int j=0;j<res;j++){
				printf("%d ",a[b[i]+j]);
			}
			printf("\n");
		}
	}
}