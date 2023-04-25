#include<stdio.h>
#include<string.h>

int main(){
    int t,sum,i;
    scanf("%d\n",&t);
    while(t--){
        sum = 0;
        char str[100];
        int num[100];
        gets(str);
        int length = strlen(str);
        for (i=0;i<length;i++){
            switch(str[i]){
                case 'I': 
                    num[i] = 1;
                    break;
                case 'V': 
                    num[i] = 5;
                    break;
                case 'X': 
                    num[i] = 10;
                    break;
                case 'L': 
                    num[i] = 50;
                    break;
                case 'C': 
                    num[i] = 100;
                    break;
                case 'D': 
                    num[i] = 500;
                    break;
                case 'M': 
                    num[i] = 1000;
                    break;
            }
        }
        for(i=0;i < length -1;i++){
            if(num[i] < num[i+1])  sum -= num[i];
            else sum += num[i]; 
        }
        sum += num[length - 1];
        printf("%d\n",sum);
    }
    return 0;
}