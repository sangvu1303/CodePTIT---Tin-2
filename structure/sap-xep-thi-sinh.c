// #include<stdio.h>
// #include<string.h>
// struct sxts{
// 	int ma_sv;
// 	char ten_sv[1000],ngay_sinh[1000];
// 	float mon1,mon2,mon3,tongdiem;
// };
// int main(){
// 	int n,i,j;
// 	scanf("%d\n",&n);
// 	struct sxts A[n];
// 	for(i=0;i<n;i++){
// 		A[i].ma_sv = i+1;
// 		gets(A[i].ten_sv);
// 		gets(A[i].ngay_sinh);
// 		if(i==n-1) scanf("%f%f%f",&A[i].mon1,&A[i].mon2,&A[i].mon3);
// 		else scanf("%f%f%f\n",&A[i].mon1,&A[i].mon2,&A[i].mon3);	
// 	}
// 	for(i=0;i<n-1;i++){
// 		for(j=i+1;j<n;j++){
// 			A[i].tongdiem = A[i].mon1+A[i].mon2+A[i].mon3;
// 			A[j].tongdiem = A[j].mon1+A[j].mon2+A[j].mon3;
// 			if(A[i].tongdiem < A[j].tongdiem){
// 				struct sxts s=A[i];
// 				A[i]=A[j];
// 				A[j]=s;
// 			}
// 		}		
// 	}
// 	for(i=0;i<n;i++){
// 		printf("%d %s %s %.1f\n",A[i].ma_sv, A[i].ten_sv, A[i].ngay_sinh, A[i].tongdiem);
// 	}
// 	return 0;
// }

#include<stdio.h>
#include<string.h>
struct sxts{
	int id;
	char name[100], date[100];
	float a,b,c,sum;
};

int main(){
	int n;
	scanf("%d\n",&n);
	struct sxts s[n],temp;
	for (int i=0;i<n;i++){
		s[i].id = i + 1;
		gets(s[i].name);
		gets(s[i].date);
		if(i==n-1) scanf("%f %f %f\n",&s[i].a, &s[i].b, &s[i].c);
		else scanf("%f %f %f\n",&s[i].a, &s[i].b, &s[i].c);
		s[i].sum = s[i].a + s[i].b + s[i].c;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].sum < s[j].sum){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
		printf("%d %s %s %.1f\n", s[i].id, s[i].name, s[i].date, s[i].sum);
	}
	return 0;
}