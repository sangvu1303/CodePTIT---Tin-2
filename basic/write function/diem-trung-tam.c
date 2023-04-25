#include<stdio.h>
#include<stdbool.h>

int main(){
	int n,i,a,b,e=0,f=0,c=0;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d%d",&a,&b);
		if(a==e||a==f||b==e||b==f)
		c++;
		e=a,f=b;
	}
    if(c==n-2)
        printf("Yes");
    else
        printf("No");
	
}