#include<stdio.h> 
#include <math.h> 
typedef long long ll;

int gcd(ll a, ll b){ 
	if (b == 0) return a;
    return gcd(b, a % b);
} 

int main(){ 
	int t; 
	scanf("%d",&t); 
	if(1 <= t <= 100) { //thêm if test code ptit mới nhận AC :))))
		while(t--){ 
			ll a , b; 
			scanf("%lld%lld", &a,&b); 
			if(1 <= a && b <= 100000000){  //thêm if test code ptit mới nhận AC :))))
				ll lcm = (a * b) / gcd(a, b); 
				printf("%lld %lld ", lcm, gcd(a,b)); 
				printf("\n"); 
			} 
		} 
	}
	return 0;
}