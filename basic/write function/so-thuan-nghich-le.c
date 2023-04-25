#include<stdio.h>

int kt(long long n){ // kiểm tra số thuận nghịch
	long long rev = 0, m = n;
	while(n != 0){
		rev = rev*10 + n%10;
		n /= 10;
	}
	if(rev==m) return 1;
	return 0;
}

int odd(long long n){ //kiểm tra số lẻ
	if(n%2 != 0) return 1;
	return 0;
}

int sum(long long n){ // kiểm tra tổng lẻ
	long long a;
	long long sum = 0;
	while(n){
		a = n%10;
		n /= 10;
		sum += a;
	}
	if(odd(sum)) return 1;
	return 0;
}

int main()	{
	int t,i;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(kt(n) && odd(n) && sum(n)) printf("YES\n");		
		else printf("NO\n");		
	}
	return 0;
}