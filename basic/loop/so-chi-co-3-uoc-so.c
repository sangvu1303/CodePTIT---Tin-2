#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int p[1000001];

int check(){ // dùng để sàng lọc số nguyên tố
	for(int i=0;i<1000000;i++){
		p[i]=1;
	}
	p[0]=0;p[1]=0;
	for(int i=2;i<sqrt(1000000);i++){
		if(p[i]){
			for(int j=i*i;j<1000000;j+=i){
				p[j]=0;
			}
		}
	}
}
int main(){
	check();
	int t; 
	scanf("%d",&t);
	while(t--){
		long long l,r;
		scanf("%lld%lld",&l,&r);
		int c1 = sqrt(l), c2 = sqrt(r);
		if(1ll * c1 * c1 < l) ++c1;
		int count = 0;
		for(int i=c1;i<=c2;i++){
			if(p[i]) ++count;
		}
		printf("%d\n",count);
	}
	return 0;
}

// ước của 1 số tính như sau: n = p1^e1 * p2^e2 ... * pk^ek 
// --> n có số ước là (e1+1)*(e2+1)*(e3+1)
// ví dụ n = 60 = 2^2 * 3^1 * 5^1 
// thì n có số ước là (2+1)*(1+1)*(1+1)=12 ước
// trong bài này yêu cầu số có 3 ước thì chỉ có 1 trường hợp e = 2
// --> các số cần tìm có dạng p^2 hay nói dễ hơn là 1 số bình phương của 1 số nguyên tố
// bài này duyệt for của p từ căn left đến căn right 