#include<stdio.h>

int main(){
	int t;scanf("%d",&t);
	while (t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int count = 0;
		// check 1 số với các số trước . độ khó O(n^2)
		// for(int i=0;i<n;i++){
		// 	int check = 1;
		// 	for(int j=0;j<i;j++){
		// 		if(a[j] > a[i]){
		// 			check = 0;
		// 			break;
		// 		}
		// 	}
		// 	if(check) ++count;
		// }

		// làm tối ưu . độ khó O(n)
		int max = -1e9;
		for(int i=0;i<n;i++){
			if(a[i] >= max){
				++count;
				max = a[i];
			}
		}
		printf("%d\n",count);
	}
	return 0;
}