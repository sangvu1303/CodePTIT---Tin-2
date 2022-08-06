#include<stdio.h>
#include<math.h>


int main(){
	int a[1000], b[1000], n, m=0, pos;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &pos);
	for(int i=pos; i<n; i++){
		b[m++] = a[i];
	}
	for(int i=0; i<pos; i++){
		b[m++] = a[i];
	}

	for(int i=0; i<n; i++){
		printf("%d ", b[i]);
	}
	return 0;
}
