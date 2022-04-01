#include <stdio.h>
#include <time.h>

void hensRoosters() {
  int hens = 25 + 30 / 6;
  int roosters = 100 - 25 * 3;
  printf("I will now count my chickens\n");
  printf("I have %d hens and %d roosters\n", hens, roosters);
}

void carpool() {
  int cars = 100;
  int SpaceInCars = 4;
  int drivers = 30;
  int passengers = 90;
  printf("Cars left over: %d\n", cars - drivers);
  printf("Max car pool capacity: %d\n", drivers * SpaceInCars);
  printf("Avg passengers per car: %d\n", passengers / drivers);
}

int getDaysSinceBirth(int year, int months, int days) {
  time_t t1, t2;
  //define two time variables
  t1 = time(NULL);
  //get seconds since jan 1 1970
  struct tm tms;
  //seperate time into seperate date components  
  localtime_r(&t1, &tms);
  tms.tm_year = year - 1900;
  tms.tm_mon = months-1;
  tms.tm_mday = days;
  t2 = mktime(&tms);
  return (t1 - t2)/86400;
}

void calenderWonderland() {
  char name[20];
  char *nameInput = name;
  int days, months, year, daysSinceBirth;
  printf("enter name: ");
  scanf("%s", name);
  printf("Hello %s, Please enter yout birthday in format dd mm yyyy to find the days since your birthday: ", nameInput);
  scanf("%d %d %d", &days, &months, &year);
  printf("%d %d %d\n", days, months, year);
  daysSinceBirth = getDaysSinceBirth(year, months, days);
  printf("days = %d\n", daysSinceBirth);
}


int main(void) {
  int program;
  printf("Choose program to run:\npress 1 for Hens and roosters\npress 2 for Carpool\npress 3 for Calender wonderland\n");
  scanf("%d", &program);
  if (program==1) {
    printf("Running Hens and Roosters\n\n");
    hensRoosters();
  } else if (program==2){
    printf("Running Carpool\n\n");
    carpool();
  }  else if (program==3){
    printf("Running Calender wonderland\n\n");
    calenderWonderland();
  } else {
    printf("Invalid Program\n\n");
  }
  return 0;
}