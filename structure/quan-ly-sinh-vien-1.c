#include<stdio.h>
#include<string.h>

struct sv{
	int id;
	char name[100];
	double a,b,c;
};

struct sv s[1000],temp;
int count = 0;

void add(){
	int n;
	scanf("%d\n",&n);
	printf("%d\n",n);
	while(n--){
		s[count].id = count + 1;
		gets(s[count].name);
		scanf("%lf %lf %lf\n",&s[count].a,&s[count].b,&s[count].c);
		count++;
	}
}

void update(){
	int n;
	scanf("%d\n",&n);
	printf("%d\n",n);
	gets(s[n-1].name);
	scanf("%lf %lf %lf\n",&s[n-1].a,&s[n-1].b,&s[n-1].c);
}

void display(){
	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(s[i].a + s[i].b + s[i].c > s[j].a + s[j].b + s[j].c){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	for(int i=0;i<count;i++){
		printf("%d %s %.1lf %.1lf %.1lf\n",s[i].id,s[i].name,s[i].a,s[i].b,s[i].c);
	}
}

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		switch(n){
			case 1:
				add();
				break;
			case 2:
				update();
				break;
			case 3:
				display();
				break;
		}
		if(n==3) break;
	}
	return 0;
}