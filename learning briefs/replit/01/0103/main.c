#include <stdio.h>

void displayMessage() {
  printf("We're learning about functions, how to call them, how to pass variables in them, and how to return values from them.");
}

float myDivide(double a, double b) {
  return a/b;
}

void division() {
  int a;
  int b;
  printf("enter numbers to divide: ");
  scanf("%d %d", &a, &b);
  printf("%f", myDivide(a, b));
} 

int myAdd(int a, int b) {
  return a + b;
}

int mySubtract(int a, int b) {
  return a - b;
}

int myMultiply(int a, int b) {
  return a * b;
}

void calc() {
  int a;
  char operation;
  int b;
  printf("enter equation in format a (operator) b using only operators + - / *: ");
  scanf("%d %c %d", &a, &operation, &b);
  if (operation=='+') {
    printf("%d", myAdd(a, b));
  } else if (operation=='-') {
    printf("%d", mySubtract(a, b));
  } else if (operation=='/') {
    printf("%f", myDivide(a, b));
  } else if (operation=='*') {
    printf("%d", myMultiply(a, b));
  }

}

int main(void) {
  int program;
  printf("choose program:\npress 1 to display message\npress 2 for division\npress 3 for calculator\n");
  scanf("%d", &program);
  if (program==1) {
    displayMessage();
  } else if (program==2) {
    division();
  } else if (program==3) {
    calc();
  }
}
