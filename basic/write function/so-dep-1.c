#include<stdio.h> 
#include<math.h> 

int snt(int n){ 
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1; 
} 

int tong(int n){
	int sum=0;
	while(n){
		sum += n%10; 
		n /= 10; 
	} 
	return sum; 
} 

long long fibo( int n){
	n = tong(n); 
	long long f0=0,f1=1,f2=1,fn; 
	if(n==0) return 0; 
	else {
		if(n==1) return 1; 
		else {
			for(int i=0;i<=92;i++){ 
				fn=f1+f2; 
				f1=f2; 
				f2=fn; 
				if(fn==n) return 1; 
			} 
		}
		return 0;
	}
}	

int main(){
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(b>a){
		for(i=a;i<=b;i++){
			if(snt(i)==1 && fibo(i)==1) printf("%d ",i);
		} 
	}else {
		int temp=a;
		a=b;
		b=temp;
		for(i=a;i<=b;i++){
			if(snt(i)==1 && fibo(i)==1) printf("%d ",i);
		} 
	}	   
	return 0;
}