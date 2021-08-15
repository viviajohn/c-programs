/*C program to input principal, rate and time to calculate Simple Interest.*/

#include<stdio.h>

int main()
{
  float p, r, t;

  printf("\nEnter principal, rate, time: ");
  scanf("%f%f%f", &p, &r, &t);

  printf("\nSimple Interest: Rs. %.2f", (p*r*t)/100);
}