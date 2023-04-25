#include<stdio.h> 
#include<math.h> 

int c[1000000]; 

int main(){ 
	int t; int test=1; 
	scanf("%d", &t); 
	while(t--){ 
		int n; scanf("%d", &n); 
		int a[n],b[n]; 
		int count =0; 
		for(int i=0;i<n;i++){ 
			scanf("%d", &a[i]); 
		} 
		for(int i=0;i<n;i++){ 
			scanf("%d", &b[i]); 
		} 
		for(int i=0;i<n;i++){ 
			for(int j=i+1;j<n;j++){ 
				if(a[i]>a[j]){ 
					int temp=a[i]; 
					a[i]=a[j]; 
					a[j]=temp; 
				} 
			} 
		} 
		for(int i=0;i<n;i++){ 
			for(int j=i+1;j<n;j++){ 
				if(b[i]>b[j]){ 
					int temp1=b[i]; 
					b[i]=b[j]; 
					b[j]=temp1; 
				} 
			} 
		} 
		for(int i=0;i<n;i++){ 
			c[count]=a[i]; 
			count+=2; 
		} 
		int sum =1; 
		for(int i=n-1;i>=0;i--){ 
			c[sum]=b[i]; 
			sum+=2; 
		} 
		printf("Test %d:\n", test); 
		test++; 
		for(int i=0;i<2*n;i++){ 
			printf("%d ", c[i]); 
		} 
		printf("\n"); 
	} 
	return 0; 
}