#include<stdio.h> 
#include<stdlib.h> 

int main() { 
	int t; scanf("%d",&t); 
	while(t--) { 
		int n,b=0; scanf("%d",&n); 
		int a[n]; 
		for(int i=0;i<n;i++) scanf("%d",&a[i]); 
		for (int i=0;i<n-1;i++) { 
			for(int j=i+1;j<n;j++) 
				if(a[i]==a[j]) { 
					printf("%d\n",a[i]); 
					b=1; break; 
				} 
				if (b) break; 
		} 
		if (!b) printf("NO\n"); 
	} 
}