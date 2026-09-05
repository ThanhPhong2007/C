#include <stdio.h>
// tao stack
int stack[100];
int top = -1;

void push(int value) {
    top++;
    stack[top] = value;
}

int pop() {
    int value = stack[top];
    top--;
    return value;
}

void DecToBin(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        push (n % 2);
        n = n / 2;
    }

    while (top != -1) {
        printf("%d", pop());
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    DecToBin(n);
    return 0;
}