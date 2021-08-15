/*C program to accept base and height from user and find the area of triangle and display.*/

#include<stdio.h>

int main()
{
  float b, h;

  printf("\nEnter base and height: ");
  scanf("%f%f", &b, &h);

  printf("\nArea of triangle = %.3f sq.units", 0.5*b*h);
}