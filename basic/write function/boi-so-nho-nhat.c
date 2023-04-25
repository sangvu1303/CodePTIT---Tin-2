#include <stdio.h> 

long long __gcd(long long a, long long b) { 
	if (b == 0) return a; 
	else return __gcd(b, a % b); 
} 

long long lcm(long long a, long long b) { 
	return a / __gcd(a, b) * b; 
} 

long long solve(long long n, long long m) { 
	long long res = m; 
	for (long long i = m - 1; i >= n; i--) { 
		if (res % i != 0) { 
			res = lcm(res, i); 
		} 
	} 
	return res; 
} 

int main() { 
	int t; scanf("%d", &t); 
	while (t--) { 
		long long n, m; scanf("%lld%lld", &n, &m); 
		printf("%lld\n", solve(n, m)); 
	} 
	return 0; 
}