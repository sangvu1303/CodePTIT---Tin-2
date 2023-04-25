#include <stdio.h>
#include <string.h>
int main (){
	int t; scanf("%d",&t);
	while(t--){
		int n=0,c=0,l=0; // chan,le ++
		char kytu = ' ';
		while(kytu != '\n'){
			int x; scanf("%d",&x);
			++n;
			if(x%2==0) ++c;
			else ++l;
			kytu = getchar();
		}
		if((n%2==0 && c>l) || (n%2==1 && c<l)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}