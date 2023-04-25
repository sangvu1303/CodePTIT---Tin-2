#include<stdio.h> 
#include<math.h> 

int thuannghich(int n){ 
	int a=0,b,c; 
	c=n; 
	while(c>0){ 
		b=c%10; 
		a=a*10+b; 
		c/=10; 
	} 
	if(n==a) return 1; 
	else  return 0; 
} 

int tongchuso(int n){ 
	int sum=0;
	int temp=n; 
	while(n>0){ 
		sum+=n%10; 
		n=n/10; 
	} 
	if(sum%10==0){ return 1; } 
	else{ return 0; } 
} 

int main (){ 
	int t; scanf("%d",&t); 
	while (t--){ 
		int n; scanf("%d",&n); 
		int count =0; 
		long long a=pow(10,n-1); 
		long long b=pow(10,n)-1; 
		for(long long i=a;i<b;i++){ 
			if(thuannghich(i)==1&&tongchuso(i)==1) count++; 
		} 
		printf("%d\n",count); 
	} 
}