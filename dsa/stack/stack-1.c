#include <stdio.h>
#include <string.h>
#define MAX 100
// Stack
char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}
char pop() {
    return stack[top--];
}
void ReverseString(char *str) {
    int len = strlen(str);

    // Push vào đĩa
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }
    // Pop ra
    for (int i = 0; i < len; i++) {
        str[i] = pop();
    }
}
int main() {
    char s[MAX];
    fgets(s, sizeof(s), stdin);
    ReverseString(s);
    printf("%s", s);
    return 0;
}