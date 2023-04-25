#include<stdio.h>
#include<math.h>

int stn(int n){ // thuận nghịch
	int sum = 0,a = 0,rev = n;
	while(n){
		int i = n%10;
		if(i==4) return 0;	
		sum += i;
		a = a*10 + i;
		n /= 10;
	}
	if(a == rev && sum % 10 == 0) return 1;	 // tổng chia hết 10
	return 0;
}

int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=pow(10,n-1)+1;i<pow(10,n);i++){ //số cần tìm trong khoảng 10^(n-1) đến 10^n
			if(stn(i)) printf("%d ",i);		
		}
		printf("\n"); 
	}
	return 0;
}