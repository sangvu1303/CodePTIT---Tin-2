#include<stdio.h>
// #include <math.h>
// #include <stdlib.h> 

int main(){ 
	int n,t=0;
	scanf("%d",&n);
	
	while(n>0){ //thay while
		n/=10;
		t++;
	}
	// t = floor(log10(abs(n))) + 1; // dùng thay cho while () ; thêm 2 thư viện trên
	printf("%d",t);	
	return 0;
}