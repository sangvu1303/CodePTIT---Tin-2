#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define MAX 2000000

int main(){
	long int n,a,i,j,sum=0,m;
	scanf("%ld",&n);
	bool N[MAX];

	for (i = 2; i <= MAX; i++) {
		N[i] = true;
	}

	for (i = 2; i <= sqrt(MAX); i++) {
		if (N[i] == true) {
      		for (j = 2 * i; j <= MAX; j += i) {
				N[j] = false;
			}
		}
	}

	for(i=0;i<n;i++){
		scanf("%ld",&a);
		j=2;
		while(j<=a){
			if(N[a]) {
				sum+=a;
				break;
			} 
			if(N[j]){
				if(a%j==0){
					while(a%j==0){
						sum+=j;
						a/=j;
					}
				}	
			}
			j++;
		}
	}	
	printf("%ld",sum);
}