#include <stdio.h>

typedef enum {
  Monday, //0 --> 7
  Tuesday, //1 --> 6
  Wednesday, //2 --> 5
  Thursday, //3 --> 4
  Friday, //4 --> 3
  Saturday, //5 --> 2
  Sunday //6 --> 1
} day; //formula = 7 - day

int main()
{
  int date[3];
  char *curr_day = (char*)malloc(10*sizeof(char));

  printf("Please input today's date (dd): ");
  scanf("%d", &date[0]);

  printf("Please input today's month (mm): ");
  scanf("%d", &date[1]);

  printf("Please input today's year (yyyy): ");
  scanf("%d", &date[2]);

  printf("\nPlease input today's day: ");
  scanf("%s", curr_day);

  

  return (0);
}