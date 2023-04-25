#include <stdio.h>

int sd(long long n){
	int a[20],dem=0;
	while (n>0){
		a[dem++]=n%10;
		n/=10;
	}
	for (int i=1;i<dem-1;i++) {
		if(a[i]!=a[dem-1-i]) return 1;
		if(a[0]==2*a[dem-1]) return 0;
		if(2*a[0]==a[dem-1]) return 0;
	}
	return 1;
} 

int main () {
	int t; 
	scanf("%d",&t);
	while (t--) {
		long long a;
		scanf("%lld",&a);
		if(sd(a)==0) printf("YES\n"); 
		else printf("NO\n");
	}
}