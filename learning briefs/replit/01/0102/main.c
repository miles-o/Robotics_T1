#include <stdio.h>


void timesTables() {
  int base, current, end, ans;
  printf("Base: ");
  scanf(" %d", &base);
  printf("Start: ");
  scanf(" %d", &current);
  printf("End: ");
  scanf(" %d", &end);
  while(current <= end) {
    ans = base * current;
    printf("%d * %d = %d\n", base, current, ans);
    current++;
  }
}

void whileLoops() {
  char shape  = '*';
  int height, length = 1;
  while (height <= 4) {
    while (length <= height) {
        printf("%c", shape);
        length = length + 1;
      }
      printf("\n");
      height = height + 1;
      length = 1;
  }
  length = 1;
  height = 1;
  printf("\n\n\n");

  while (height <= 3) {
    while (length <= 2 * height - 1) {
        printf("%c", shape);
        length = length + 1;
      }
      printf("\n");
      height = height + 1;
      length = 1;
  }
  height = height - 2;
  while (height >= 1) {
      while (length <= 2 * height - 1) {
          printf("%c", shape);
          length = length + 1;
        }
        printf("\n");
        height = height - 1;
        length = 1;
  }
}

void factorials() {
  int temp, factorialBase;
  int factorial = 1;
  printf("Pick a number to print your factorial: ");
  scanf("%d", &factorialBase);
  temp = factorialBase;
  for (int i = temp; i > 1; i--) {
    factorial = i * factorial;
  }
  printf("%d != %d", factorialBase, factorial);
}

void averages() {
  int temp, numbers, number, userInput;
  char playing = 'y';
  while (playing == 'y'){
      temp = number;
      printf("Add a number to add to the sum: ");
      scanf("%d", &number);
      number = number + temp;
      printf("More numbers? y/n ");
      scanf(" %c", &userInput);
      numbers++;
      playing = userInput;
  }
  printf("%f", (double)number/(double)numbers);

}

int main(void) {
  int program = 1;
  printf("Choose program:\nPress 1 for the times table\nPress 2 for abusing wile loops\nPress 3 for factorials\nPress 4 for averages\n");
  scanf("%d", &program);
  printf("\n\n");
  if (program==1) {
  timesTables();
  } else if (program==2) {
    whileLoops();
  } else if (program==3) {
    factorials();
  } else if (program==4) {
    averages();
  }
}
