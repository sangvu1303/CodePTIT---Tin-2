#include<stdio.h>

int kt(int n){
	int x=0,y=0;
	while(n){
		int i=n%10;
		int j=(n/10)%10;
		if(i<j)
			x++;
			y++;
			n/=10;
	}
	if(x+1==y) return 1;
	return 0;
}
int main(){
	int t,i,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		int count = 0;
		for(i=a;i<=b;i++){
			if(kt(i))
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}