#include<stdio.h>
#include<math.h>
int main(){
	int t,a,b,c,d;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(abs(c-a)==abs(d-b))
			printf("YES\n");
		else
			printf("NO\n");
	}
}