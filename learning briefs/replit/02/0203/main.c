#include <stdio.h>
#include <string.h>

void problem1() {
  int arrChar = 0;
  int element[10];
  printf("Input 10 number of elements in the array\n");
  for (int i = 0; i < 10; i++) {
    printf("Element - %d : ", i);
    scanf("%d", &arrChar);
    element[i] = arrChar;
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", element[i]);
  }
}

void problem2() {
  int arrLength, arrChar = 0;
  printf("Input number of elements to store in the array: ");
  scanf("%d", &arrLength);
  int element[arrLength];
  printf("Input %d number of elements in the array\n", arrLength);
  for (int i = 0; i < arrLength; i++) {
    printf("Element - %d : ", i);
    scanf("%d", &arrChar);
    element[i] = arrChar;
  }
  printf("The elements are\n");
  for (int i = 0; i < arrLength; i++) {
    printf("%d ", element[i]);
  }
  printf("\nIn reverse\n");
  for (int i = arrLength - 1; i >= 0; i--) {
  printf("%d ", element[i]);
  }
  printf("\n");
}

void problem3() {
  int arrLength, arrChar, sum = 0;
  printf("Input number of elements to store in the array: ");
  scanf("%d", &arrLength);
  int element[arrLength];
  printf("Input %d number of elements in the array\n", arrLength);
  for (int i = 0; i < arrLength; i++) {
    printf("Element - %d : ", i);
    scanf("%d", &arrChar);
    element[i] = arrChar;
  }
  for (int i = 0; i < arrLength; i++) {
    sum = sum + element[i];
  }
  printf("Sum of all elements is: %d \n", sum);
}

void problem4() {
  int arrCength, arrChar, arrLength, arr2Length = 0;
  printf("Input number of elements to store in the array: ");
  scanf("%d", &arrLength);
  int element[arrLength];
  printf("Input %d number of elements in the array\n", arrLength);
  for (int i = 0; i < arrLength; i++) {
    printf("Element - %d : ", i);
    scanf("%d", &arrChar);
    element[i] = arrChar;
  }
  arr2Length = sizeof(element)/4;
  int element2[arr2Length];
  for (int i = 0; i < arr2Length; i++) {
    element2[i] = element[i];
  }
  printf("The values in the array are\n");
  for (int i = 0; i < arrLength; i++) {
    printf("%d ", element[i]);
  }
  printf("\nThe values copied into the second array are\n");
  for (int i = 0; i < arr2Length; i++) {
    printf("%d ", element2[i]);
  }
  printf("\n");
}

int main(void) {
  int program;
  printf("Choose program:\nPress 1 for store elements and print\nPress 2 for read n values and reverse\nPress 3 to sum up all elements\nPress 4 to copy to another array\n");
  scanf(" %d", &program);
  if (program==1) {
    problem1();
  } else if (program==2) {
    problem2();
  } else if (program==3) {
    problem3();
  } else if (program==4) {
    problem4();
  } else {
    printf("Invalid program");
  }
}
