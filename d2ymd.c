//Program to convert days to years, months and days

#include<stdio.h>

int main()
{
  int days, months, years, weeks;

  printf("\nEnter days: ");
  scanf("%d", &days);

  years = days / 365;
  days = days % 365;
  months = days / 30;
  days = days % 30;
  weeks = days / 7;
  days = days % 7;

  printf("%d years %d months %d weeks %d days", years, months, weeks, days);
}