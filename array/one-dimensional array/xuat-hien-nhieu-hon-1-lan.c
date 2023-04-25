#include<stdio.h>

// int main(){
// 	int n; scanf("%d",&n);
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		scanf("%d",&a[i]);
// 	}
// 	// check xem 1 số gặp lần đầu bằng cách check các số trước nó
// 	for(int i=0;i<n;i++){
// 		int check = 1;
// 		for(int j=0;j<i;j++){
// 			if(a[i]==a[j]){
// 				check = 0;
// 				break;
// 			}
// 		}
// 		if(check){
// 			int cnt = 1;
// 			for(int j=i+1;j<n;j++){
// 				if(a[i]==a[j]) ++cnt;
// 			}
// 			if(cnt>1) printf("%d ",a[i]);
// 		}
// 	}
// 	return 0;
// }


// cách 2 - mảng đánh dấu
int cnt[1000001];

int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]] >= 2){
			printf("%d ",a[i]);
			cnt[a[i]] = 0;
		}
	}
	return 0;
}