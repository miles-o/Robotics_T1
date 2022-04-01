#include <stdio.h>

int checkPalindrome(char str[], int stringLength) {
  int strCharR, midChar;
  int strCharL = 0;
  printf("length: %d\n", stringLength);
  strCharR = stringLength - 1;
  midChar = stringLength / 2;
  while(strCharL != midChar + 1) {
    printf("r char: %c\n", str[strCharR]);
    printf("l char: %c\n", str[strCharL]);
    if (str[strCharR] != str[strCharL]) {
      return 0;
    }
    strCharL++;
    strCharR--;
  }
  return 1;
}

int main(void) {
  int palindrome, stringLength = 0;
  char str[20];
  printf("Input: ");
  scanf("%s", str);
  printf("%s\n", str);
  stringLength = strlen(str);
  printf("%d\n", stringLength);
  palindrome = checkPalindrome(str, stringLength);
  if (palindrome == 1) {
    printf("is palindrome\n");
  } else if (palindrome == 0) {
    printf("not palindrome\n");
  } else {
    printf("error\n");
  }
}