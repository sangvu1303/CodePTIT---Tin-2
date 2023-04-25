#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 10000

// Khai báo cấu trúc stack
typedef struct {
    char data[MAXSIZE];
    int top;
} Stack;

// Khởi tạo stack
void initialize(Stack *s) {
    s->top = -1;
}

// Kiểm tra stack rỗng
int isempty(Stack *s) {
    return s->top == -1;
}

// Thêm phần tử vào stack
void push(Stack *s, char c) {
    if (s->top == MAXSIZE - 1) {
        printf("Stack overflow!\n");
        exit(1);
    }
    s->top++;
    s->data[s->top] = c;
}

// Lấy phần tử từ stack
char pop(Stack *s) {
    if (isempty(s)) {
        printf("Stack underflow!\n");
        exit(1);
    }
    char c = s->data[s->top];
    s->top--;
    return c;
}

// Kiểm tra xâu có đối xứng hay không
int isbalanced(char *str) {
    Stack s;
    initialize(&s);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '\'' || str[i] == '\"') {
            push(&s, str[i]);
        } else if (str[i] == ')' || str[i] == ']' || str[i] == '}' || str[i] == '\'' || str[i] == '\"') {
            if (isempty(&s)) {
                return 0;
            } else {
                char c = pop(&s);
                if ((str[i] == ')' && c != '(') || (str[i] == ']' && c != '[') || (str[i] == '}' && c != '{') 
                || (str[i] == '\'' && c != '\'') || (str[i] == '\"' && c != '\"')) {
                    return 0;
                }
            }
        }
    }
    return isempty(&s);
}

int main() {
    char str[MAXSIZE];
    fgets(str, MAXSIZE, stdin);
    printf("%d", isbalanced(str));
    return 0;
}