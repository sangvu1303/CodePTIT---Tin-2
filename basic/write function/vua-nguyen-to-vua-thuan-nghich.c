#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool thuannghich(int n) {
	int m = n;
	int sum = 0;
	while (n != 0) {
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum == m;
}

bool nguyento(int n){
	if (n < 2) {
        return false;
    }
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int t; 	
	scanf("%d",&t);
	while (t--) {
		int a, b, c = 0,i;		
		scanf("%d %d",&a,&b);
		for (i = a; i <= b; i++) {
			if (thuannghich(i) && nguyento(i)) {
				printf("%d ",i);
				c++;
				if(c%10==0 ) printf("\n");				
			}
		}
		printf("\n");
	}
	return 0;
}