#include <stdio.h>
#include <stdbool.h>

bool check(int n){
    int first, last, count = 0, temp = n;  

    last = n % 10;// lấy chữ số cuối  
    
    while (temp > 0 && temp < 10^9){// đếm số chữ số của số n
        temp /= 10;
        count++;
    }   
    first = n / pow(10, count-1);// lấy chữ số đầu

    if (first == last) return true;      
    else return false;
}

int main(){
    int t, n;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        scanf("%d", &n);
        if (check(n)) printf("YES\n");          
        else  printf("NO\n");     
    }
    return 0;
}