#include<stdio.h>
#include<stdbool.h>

bool isStrong(int n){
    int s=0, d, f;
    int temp = n;   // calculate sum of factorials of digits  
	while(temp > 0){       
		d = temp % 10;
        f = 1;
        for(int i=2; i<=d; i++){
            f *= i;
        }
        s += f;
        temp /= 10;
    }  
    // check if sum of factorials of digits is equal to the number
    if(s == n)return true;
    else return false;
}

int main(){
    int n;   
    scanf("%d",&n);    
    for(int i=1; i<=n; i++){
        if(isStrong(i))  printf("%d ", i);        
    }
    return 0;
}