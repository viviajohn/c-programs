/*C program to input a character, integer, decimal (Floating point number) values and print it.*/

#include<stdio.h>

int main()
{
  char a;
  int b;
  float c;

  printf("\nEnter character: ");
  scanf("%c", &a);
  printf("\nValue of a is %c", a);

  printf("\nEnter integer: ");
  scanf("%d", &b);
  printf("\nValue of b is %d", b);

  printf("\nEnter decimal: ");
  scanf("%f", &c);
  printf("\nValue of c is %f", c);
}