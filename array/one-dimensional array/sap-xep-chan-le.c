#include<stdio.h>
int main(){ 
	int n,b,i,j; 
	int a[100]; 
	scanf("%d",&n); 
	for(i=1;i<=n;i++){ 
		scanf("%d",&a[i]); 
	} 
	for(i=1;i<=n;i++){ 	
		for(j=i+1;j<=n;j++){	
			if(a[i]>a[j]){ 	
				b=a[i]; 				//sap xep tang
				a[i]=a[j]; 
				a[j]=b; 
			} 
		} 
	} 
	for(i=1;i<=n;i++){ 	
		if(a[i]%2==0) printf("%d ",a[i]);	//IN CHAN		
	} 
	for(i=1;i<=n;i++){ 
		if(a[i]%2!=0) printf("%d ",a[i]); 	//IN LE		
	} 
	return 0;
}