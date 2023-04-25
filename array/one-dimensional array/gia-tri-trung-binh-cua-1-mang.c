#include<stdio.h>
#include<math.h>

int main(){
	int n;scanf("%d",&n);
	int a[n];
	double s = 0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		s += a[i];
	}

	printf("%.3lf",s / n);
	return 0;
}