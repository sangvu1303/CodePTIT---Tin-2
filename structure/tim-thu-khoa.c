#include<stdio.h>
#include<string.h>
struct ttk{
	int id;
	char name[100], date[100];
	float a,b,c,sum;
};

int main(){
	int n;
	scanf("%d\n",&n);
	struct ttk s[n];
	float max = 0;
	for (int i=0;i<n;i++){
		s[i].id = i + 1;
		gets(s[i].name);
		gets(s[i].date);
		if(i==n-1) scanf("%f %f %f\n",&s[i].a, &s[i].b, &s[i].c);
		else scanf("%f %f %f\n",&s[i].a, &s[i].b, &s[i].c);
		s[i].sum = s[i].a + s[i].b + s[i].c;
		if (s[i].sum > max)  max = s[i].sum;
	}
	for(int i=0;i<n;i++){
		if(s[i].sum == max)
			printf("%d %s %s %.1f\n", s[i].id, s[i].name, s[i].date, s[i].sum);
	}
	return 0;
}