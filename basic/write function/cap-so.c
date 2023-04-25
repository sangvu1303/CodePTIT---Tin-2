#include<stdio.h>

int ucln(int a,int b) {        
    while(b!=0){
        int c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int u1=ucln(a,b),u2=ucln(c,d);
        if(u1==u2) printf("YES\n");
        else printf("NO\n");
    }
}