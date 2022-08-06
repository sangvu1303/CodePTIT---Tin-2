#include <stdio.h>
int main()
{
	int a[100], b[100], n,m=0,p;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	scanf("%d",&a[i]);
	scanf("%d",&p);
	
	for (int i=n-p; i<n;i++)
	{
		b[m++]=a[i];
	}
	for (int i=0; i<n-p; i++)
	{
		b[m++]=a[i];
	}

	
	for (int i=0; i<m; i++)
	{
		printf("%d ",b[i]);
		
	}
	
	
	
	
	
	
	
	
	
}
