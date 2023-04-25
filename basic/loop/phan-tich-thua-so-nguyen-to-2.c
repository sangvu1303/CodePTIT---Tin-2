#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2 ; n>1 ; ){						
		if(n==i){
			printf("%d",i);
			break;
		}   // 2,3,5,7							
		if(n%i==0){	
			printf("%dx",i); 
			n=n/i;
		}
		else i++;			
	}
	return 0;
}