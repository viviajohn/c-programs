//Program to take print numbers as long as they are positive

#include<stdio.h>

int main()
{
  int i;

  while(1)
  {
    printf("\nEnter number: ");
    scanf("%d", &i);

    if(i<0)
      break;

    printf("\nEntered value of i = %d", i);
  }

  printf("\nNegative number entered!");
}