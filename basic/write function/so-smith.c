#include<stdio.h>

int tongchuso(int n){
	int sum=0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum; //tổng các chữ số
}

int tongsnt(int n){
	int j=2,sum=0;
	while(j<=n){
		if(n%j==0){
			sum += tongchuso(j);
			n /= j;	
		}
		else j++;	
	}
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	if(tongchuso(n)== tongsnt(n)) printf("YES");
	else printf("NO");	
	return 0;
}