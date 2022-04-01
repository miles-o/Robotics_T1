#include <stdio.h>

int program1() {
  char str[100];
  //printf("Enter string:");
  fflush(stdout);
  scanf("%[^\n]s",str);
  printf("You entered: %s",str);
  //idk why but this isnt printing "enter string:" first but whatever 
  return 0;
}

int getLength(char string[50]) {
  int length, currentChar = 0;
  int running = 1;
  while (running == 1) {
    if (string[currentChar] == '\0') {
      length = currentChar;
      running = 0;
    }
    currentChar++;
  }
  return length;
}

void program2() {
  char str[100];
  //printf("Enter string:");
  scanf("%[^\n]s",str);
  printf("length: %d", getLength(str));
}

void program3() {
  char str[100];
  int strChar = 0;
  //printf("Enter string:");
  scanf("%[^\n]s",str);
  while(str[strChar] != '\0') {
    printf("%c ", str[strChar]);
    strChar++;
  }
}

void program4() {
  int strChar;
  char str[100];
  //printf("Enter string:");
  scanf("%[^\n]s",str);
  strChar = strlen(str);
  while(strChar >= 0) {
    printf("%c", str[strChar]);
    strChar--;
  }
  
}

void program5() {
  int strChar = 0;
  int words = 1;
  char str[100];
  //printf("Enter string:");
  scanf("%[^\n]s",str);
  while (str[strChar] != '\0') {
    printf("%c\n", str[strChar]);
    if (str[strChar] == ' ') {
      words++;
    }
    strChar++;
  }
  printf("words: %d", words);
}

void program6() {
  int strChar = 0;
  int running, equal = 1;
  char str1[100];
  char str2[100];
  scanf("%s",str1);
  scanf("%s", str2);
  while(running == 1) {
    if (str1[strChar] != str2[strChar]) {
      running = 0;
      equal = 0;    
    }
    if (str1[strChar] == '\0') {
      running = 0;
    }
    if (str2[strChar] == '\0') {
      running = 0;
    }
    strChar++;
  }
  if (equal == 1) {
    printf("Strings are equal");
  } else {
    printf("Strings are not equal");
  }
}


int main(void) {

  
  int program;
  int running = 1;
  printf("Enter practice problem number to run e.g. problem 1, enter 1\n");
  scanf("%d\n", &program);
  if (program == 1) {
    program1();
  } else if (program == 2) {
    program2();
  } else if (program == 3) {
    program3();
  } else if (program == 4) {
    program4();
  } else if (program == 5) {
    program5();
  } else if (program == 6) {
    program6();
  } else {
    printf("Invalid Program");
  }
  return 0;
}
