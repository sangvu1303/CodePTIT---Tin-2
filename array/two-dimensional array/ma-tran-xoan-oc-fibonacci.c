#include <stdio.h>
#include <stdlib.h>

int fib(int n){
    /* Hàm tính số fibonacci */
    if(n <= 1) return n;
    else return fib(n-1) + fib(n-2);   
}


int main(){
    int n;scanf("%d", &n);

    int matrix[n][n];
    int value = 0;
    int row_start = 0, row_end = n-1;
    int col_start = 0, col_end = n-1;

    while (value < n*n){
        /* Điền giá trị cho hàng đầu tiên */
        for(int i=col_start; i<=col_end; i++){
            matrix[row_start][i] = fib(value);
            value ++;
        }
        row_start ++;

        /* Điền giá trị cho cột cuối cùng */
        for(int i=row_start; i<=row_end; i++){
            matrix[i][col_end] = fib(value);
            value ++;
        }
        col_end --;

        /* Điền giá trị cho hàng cuối cùng */
        for(int i=col_end; i>=col_start; i--){
            matrix[row_end][i] = fib(value);
            value ++;
        }
        row_end --;

        /* Điền giá trị cho cột đầu tiên */
        for(int i=row_end; i>=row_start; i--){
            matrix[i][col_start] = fib(value);
            value ++;
        }
        col_start ++;
    }

    /* In ra ma trận xoắn ốc */
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}