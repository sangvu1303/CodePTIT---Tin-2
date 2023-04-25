#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>>

// kiểm tra 1 ký tự có phải chữ in thường không
int is_lower(char c){
    if(c>= 'a' && c<='z') return 1;
    return 0;
}

// kiểm tra 1 ký tự có phải chữ in hoa không
int is_upper(char c){
    if(c>= 'A' && c<='Z') return 1;
    return 0;
}

// kiểm tra 1 ký tự có phải chữ viết không
int is_alpha(char c){
    if((c>= 'a' && c<='z') || (c>= 'A' && c<='Z')) return 1;
    return 0;
}

// kiểm tra 1 ký tự có phải 1 số không
int is_digit(char c){
    if(c>= '0' && c<='9') return 1;
    return 0;
}

// trả về dạng in thường 
char to_lower(char c){
    if(c>= 'A' && c<='Z') c += 32;
    return c;
}

// trả về dạng in hoa
char to_upper(char c){
    if(c>= 'a' && c<='z') c -= 32;
    return c;
}

// trả về chiều dài cùa xâu
int strlen(char c[]){
    int count = 0;
    while(c[count] != '\0'){ // '\0' là null
        ++count;
    }
    return count;
}

// viết thường tất cả ký tự trong xâu
char* strlwr(char c[]){
    for(int i=0;i<strlen(c);i++){
        if(c[i]>='A' && c[i]<='Z'){
            c[i] += 32;
        }
        //c[i] = to_lower(c[i]);
    }
    return c;
}

// viết hoa tất cả ký tự trong xâu
char* strupr(char c[]){
    for(int i=0;i<strlen(c);i++){
        // if(c[i]>='a' && c[i]<='z'){
        //     c[i] -= 32;
        // }
        c[i] = to_upper(c[i]);
    }
    return c;
}

// so sánh 2 xâu theo thứ tự từ điển
int min(int a,int b){
    return a<b ? a:b;
}
int strcmp(char a[],char b[]){
    int n1 = strlen(a);
    int n2 = strlen(b);
    for(int i=0;i< min(n1,n2);i++){
        if(a[i] != b[i]){
            if(a[i] > b[i]) return 1;
            else return -1;
        }
    }
    if(n1==n2) return 0;
    else if(n1<n2) return -1;
    else return 1;
}
// cũng là so sánh 2 xâu nhưng ko phân biệt chữ hoa chữ thường
int strcmpi(char a[],char b[]){
    int n1 = strlen(a);
    int n2 = strlen(b);
    strlwr(a);
    strlwr(b);
    for(int i=0;i< min(n1,n2);i++){
        if(a[i] != b[i]){
            if(a[i] > b[i]) return 1;
            else return -1;
        }
    }
    if(n1==n2) return 0;
    else if(n1<n2) return -1;
    else return 1;
}

// chuyển 1 xâu ký tự số thành 1 số long long
long long atoll(char c[]){
    long long res = 0;
    for(int i=0;i<strlen(c),i++){
        res = res*10 + c[i] - '0';
    }
    return res;
}

// trả về 1 số interger từ xâu
int atoi(char c[]){}

// đảo ngược lại 1 xâu
char* strrev(char c[]){
    int l=0,r=strlen(c)-1;
    while(l<r){
        char tmp = c[l];
        c[l] = c[r];
        c[r] = tmp;
        ++l;--r;
    }
    return c;
}

// copy xâu b sang bộ nhớ của xâu a
char* strcpy(char a[],char b[]){}

// nối 2 xâu vào với nhau
char* strcat(char a[],char b[]){}

int main(){
    char a[100],b[100],c[100];
    gets(a);
    gets(b);
    gets(c);
    printf("%s", strrev(c));
    printf("%lld", atoll(c));
}

// các hàm này đều là hàm có sẵn trong thư viện ctype.h,stdlib.h,string.h