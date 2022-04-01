#include <stdio.h>

void myAdd(int a, int b, int *ans) {
  *ans = a + b;
}

void mySubtract(int a, int b, int *ans) {
  *ans = a - b;
}

void myMultiply(int a, int b, int *ans) {
  *ans = a * b;
}

void myDivide(int a, int b, int *ans) {
  *ans = a / b;
}

void calculator() {
  int i;
  for (i = 1; 1 < 2;) {
    int a;
    char o;
    int b;
    int ans;
    printf("Enter equation in format (number) (operator) (number):");
    scanf("%d %c %d", &a, &o, &b);
    if (o=='+') {
      myAdd(a, b, &ans);
    } else if (o=='-') {
      mySubtract(a, b, &ans);
    } else if (o=='*') {
      myMultiply(a, b, &ans);
    } else if (o=='/') {
      myDivide(a, b, &ans);
    }
    printf("%d\n", ans);
  }
}

void swapNumbers(int *a, int *b, int *c) {
  *c = *a;
  *a = *b;
  *b = *c;
}

void swap() {
  int a, b, c;
  printf("Input two numbers to swap: ");
  scanf("%d %d", &a, &b);
  printf("You input:\nNum 1: %d\nNum 2: %d\n\n", a, b);
  swapNumbers(&a, &b, &c);
  printf("After swapping:\nNum 1: %d \nNum 2: %d\n\n", a, b);
}

int main(void) {
  int program, i = 0;
  while (i == 0) {
    printf("Choose program:\nPress 1 for calculator\nPress 2 for swap\n");
    scanf("%d", &program);
    if (program==1) {
      printf("Running calculator\n\n");
      calculator();
    } else if (program==2) {
      printf("Running swap\n\n");
      swap();
    } else {
      printf("Invalid program\n\n");
    }
  }
}