#include <stdio.h>

int main(){
    int n, i, j, k, a[100][100], val = 1;
    scanf("%d", &n);
    for(k = 0; k < n/2; k++){
        // hàng trên cùng-top
        for(i = k; i < n-k-1; i++){
            a[k][i] = val++;
        }
        // cột ngoài cùng bên phải-right
        for(i = k; i < n-k-1; i++){
            a[i][n-k-1] = val++;
        }
        // hàng dưới cùng-bottom
        for(i = n-k-1; i > k; i--){
            a[n-k-1][i] = val++;
        }
        // cột ngoài cùng bên trái-left
        for(i = n-k-1; i > k; i--){
            a[i][k] = val++;
        }
    }
    if(n%2 == 1) a[n/2][n/2] = val;
        
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);      
        printf("\n");
    }
    return 0;
}