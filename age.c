/*C program to print your age using the current year and asking user to input their Date of Birth*/

#include<stdio.h>

int main()
{
  int cy, yob;

  printf("\nEnter current year: ");
  scanf("%d", &cy);

  printf("\nEnter year of birth: ");
  scanf("%d", &yob);

  printf("\nAge: %d", cy-yob);
}