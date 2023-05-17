#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(j==0) printf("%d",i+1); // số đầu tiên
			else if(i==0) printf("%d",j+1); //dòng đầu
			else if(i<b-j) printf("%d",i+j+1); //dòng có số đầu tiên nhỏ hơn số cột
			else printf("%d",b-j);//dòng có số đầu tiên lớn hơn số cột
		}	
		printf("\n");
	}	
}