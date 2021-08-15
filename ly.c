//Program to find leap year

#include<stdio.h>

int main()
{
  int year;

  printf("\nEnter a year: ");
  scanf("%d", &year);

  if(year % 400 == 0)
    printf("\nLeap Year");
  else if(year % 100 == 0)
    printf("\nNon Leap Year");
  else if(year % 4 == 0)
    printf("\nLeap Year");
  else
    printf("\nNon Leap Year");
}