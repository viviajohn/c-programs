//Program to print ASCII values and characters

#include<stdio.h>

int main()
{
  int i;

  for(i=0; i<=255; i++)
  {
    printf("\n%c -> %d", i, i);
  }
}
