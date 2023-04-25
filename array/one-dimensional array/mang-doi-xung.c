#include<stdio.h>

int mdx(int n,int a[]){
	int l = 0,r = n-1;
	while(l<=r){
		if(a[l] != a[r]) return 0;
		++l;--r;
	}
	return 1;
}

int main(){
	int t,n,i;
	scanf("%d",&t);
    while(t--){
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		if(mdx(n,a)) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}