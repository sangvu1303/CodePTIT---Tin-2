#include <stdio.h>
#include<string.h>

int main() {
	int n,i;
	char A[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(A); //gets giống scanf nhưng khác là gets chấp nhận chuỗi có khoảng trống
		if(A[6]==A[7]&&A[6]==A[8]&&A[6]==A[10]&&A[6]==A[11])
			printf("YES\n"); //5 số bằng nhau

		else if((A[6]==A[7]&&A[6]==A[8])&&A[10]==A[11])
			printf("YES\n"); //3 số đầu và 2 số cuối bằng nhau

		else if((A[6]==54||A[6]==56)&&(A[7]==54||A[7]==56)&&(A[8]==54||A[8]==56)&&(A[10]==54||A[10]==56)&&(A[11]==54||A[11]==56)) 
			printf("YES\n"); //bảng mã ký tự ASCII

		else if(A[6]<A[7]&&A[7]<A[8]&&A[8]<A[10]&&A[10]<A[11])
			printf("YES\n"); //5 số tăng dần

		else printf("NO\n");			
	}
	return 0;
}

//bảng ASCII : hệ 10 chuyển qua dạng đồ họa 
// số 6 và số 8 ở dạng đồ họa thì là số 54 và 56 ở dạng thập phân 