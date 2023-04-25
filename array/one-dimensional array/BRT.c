#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long;

int cmp(const void*a,const void*b){
	return *(int*)a - *(int*)b;
}
int main (){
	int t,i;scanf("%d",&t);
	while (t--){
		int n;int a[100000];
		scanf("%d",&n);
		for (i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(int),cmp);
		int cnt = 0, res = 1e9;
		for(int i=1;i<n;i++){
			if(a[i] - a[i-1] < res){
				res = a[i] - a[i-1]; 
				cnt = 1;
			} 
			else if(a[i] - a[i-1] == res) ++cnt;
		}
		printf("%d %d\n",res,cnt);
	}
	return 0;
}