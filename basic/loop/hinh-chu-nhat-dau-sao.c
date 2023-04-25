#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j;
	for(i=1;i<=b;i++){ 
		for(j=1;j<=a;j++){
            if(i==1||j==1||i==b||j==a) printf("*");
			else printf(" ");  
        }
		printf("\n");
	}
}
//hết 2 vòng lặp for ta có 	*****
//.							*****
//.							*****
//.							*****
// nếu i=1,j=1 là dòng và cột đầu tiên sẽ vẫn là * thì i=b,j=a là cả dòng và cột có giá trị tương ứng đều là *
// còn lại thì printf space