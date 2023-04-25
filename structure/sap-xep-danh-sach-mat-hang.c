#include<stdio.h>
#include<string.h>

typedef struct{
	int ma_mat_hang;
	char ten_mat_hang[100],ten_nhom_hang[100];
	double gia_mua, gia_ban, loi_nhuan;
} mat_hang;

int main(){
	int n;
	scanf("%d",&n);
	mat_hang a[1000];
	for(int i=0;i<=n;i++){
		scanf("\n");
		gets(a[i].ten_mat_hang);
		scanf("\n");
		gets(a[i].ten_nhom_hang);
		scanf("%lf %lf",&a[i].gia_mua,&a[i].gia_ban);
		a[i].loi_nhuan = a[i].gia_ban - a[i].gia_mua;
		a[i].ma_mat_hang = i + 1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].loi_nhuan < a[j].loi_nhuan){
				mat_hang tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %s %s %.2lf\n", a[i].ma_mat_hang, a[i].ten_mat_hang, a[i].ten_nhom_hang, a[i].loi_nhuan);
	}
	return 0;
} 