#include <stdio.h>
#include <string.h>
#include <math.h>

long long Max(long long a){
	long long ans = a;
	int count = 0;
	while(a != 0){
		if(a % 10 == 5)
			ans += (long long)pow(10,count);
		a /= 10;
		++count;
	}
	return ans;
}
long long Min(long long a){
	long long ans = a;
	int count = 0;
	while(a != 0){
		if(a % 10 == 6)
			ans -= (long long)pow(10,count);
		a /= 10;
		++count;
	}
	return ans;
}

int main(){
	int t; scanf("%d",&t);
	while (t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",Min(a)+Min(b),Max(a)+Max(b));
	}
	return 0;
}

// bài này xem xét số 5 hoặc 6 đang ở vị trí nào
// nếu 5 ở vị trí chục thì lưu biến ans cộng thêm 10^2
// 6 thì trừ đi 10^2