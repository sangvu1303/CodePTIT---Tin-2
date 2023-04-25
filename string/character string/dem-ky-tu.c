#include<stdio.h>
#include<string.h>
int main()
{
	int i,dem1=0,dem2=0,dem3=0,dem=0;
	char s[100];
	gets(s); //ptit code AC khi nhận mỗi gets nhưng khi biên dịch bên ngoài thì nên dùng fgets
	// fgets(s,100,stdin);
	for(i=0;i<strlen(s);i++){	
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') dem1++;
		if(s[i]>='0'&&s[i]<='9') dem2++;
		dem++;
		dem3=dem-dem2-dem1;
	}	
	printf("%d %d %d",dem1,dem2,dem3);
	return 0;
}