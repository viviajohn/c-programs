//C program to input datatypes and display their sizes.

#include<stdio.h>

int main()
{
/*  int a;
  char b;
  float c;
  long d;
  double e;

  printf("\nEnter character: ");
  scanf("%c", &b);

  printf("\nEnter integer: ");
  scanf("%d", &a);

  printf("\nEnter decimal: ");
  scanf("%f", &c);

  printf("\nEnter long number: ");
  scanf("%ld", &d);

  printf("\nEnter double decimal: ");
  scanf("%lf", &e);*/

//C Program to display size of datatypes
  printf("\nSize of int: %ld bytes",sizeof(int));
  printf("\nSize of char: %ld bytes", sizeof(char));
  printf("\nSize of float: %ld bytes", sizeof(float));
  printf("\nSize of long: %ld bytes", sizeof(long));
  printf("\nSize of double: %ld bytes", sizeof(double));

}