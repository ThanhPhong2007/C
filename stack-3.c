#include <stdio.h>
#include <string.h>
int stack[100];
int top = -1;
void push(char c) {
    top++;
    stack[top] = c;
}
char pop() {
    char c = stack[top];
    top--;
    return c;
}
char peek() {
    char c = stack[top];
    return c;
}

int empty() {
    return top == -1;
}

void encode(char *s) {
    int len = strlen(s);
    if (len == 0) {
        return;
    }
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (empty()) {
            push(s[i]);
            count = 1;
        }
        else if (s[i] == peek()) {
            count++;
        }
        else {
            printf("%c%d", pop(), count);
            push(s[i]);
            count = 1;
        }
    }
    if (!empty()) {
        printf("%c%d", pop(), count);
    }
}
int main() {
    char s[100];
    scanf("%s", s);
    encode(s);
    return 0;
}