#include <stdio.h>
#include <math.h>

double myAdd(int a, int b) {
  return a + b;
}

double mySubtract(int a, int b) {
  return a - b;
}

double myMultiply(int a, int b) {
  return a * b;
}

double myDivide(int a, int b) {
  return a / b;
}

double myPow(double a, double b) {
  return pow(a, b);
}

double myHyp(double a, double b) {
  return sqrt((a*a) + (b*b));
}

int main(void) {
  int running = 1;
  printf("Input your equation int the format (int) (opertator) (int)\nyou may use operators + - * / ^ L (L is to find the hypotenuse of a right angle triange)\n\n");
  while(running == 1) {
    char o, a, b;
    printf("Equation: ");
    scanf("%c %c %c", &a, &o, &b);
    o == '+' ? printf("%f\n", myAdd(a - '0', b - '0')): 0;
    o == '-' ? printf("%f\n", mySubtract(a - '0', b - '0')): 0;
    o == '*' ? printf("%f\n", myMultiply(a - '0', b - '0')): 0;
    o == '/' ? printf("%f\n", myDivide(a - '0', b - '0')): 0;
    o == '^' ? printf("%f\n", myPow(a - '0', b - '0')): 0;
    o == 'L' ? printf("%f\n", myHyp(a - '0', b - '0')): 0;
  }
}