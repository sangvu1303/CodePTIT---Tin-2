#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,can;
        scanf("%d",&n);
        can = sqrt(n);
        printf(can*can == n?"YES\n":"NO\n");
    }
    return 0;
}