#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        long long n;
        int i, count = 0;
        scanf("%lld", &n);
        if(n%2 != 0) printf("0\n");
        else{
            for(i=2;i<sqrt(2*n);i+=2)
                if(n%i==0) count++;
            int c=sqrt(2*n);
            if(c*c==2*n) printf("%d\n",2*count+1);       
            else printf("%d\n",2*count);         
        }
    }
    return 0;
}