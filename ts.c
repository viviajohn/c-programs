//Program to calculate sin(x) using TSA

#include<stdio.h>
#include<math.h>

#define PI 3.141592

int main()
{
  float deg, x, nume, deno, term, sum;
  int i;

  printf("\nEnter the degrees: ");
  scanf("%f", &deg);

  x = deg * PI / 180;

  nume = x;
  deno = 1;
  term = x;
  sum = x;
  i = 1;

  do
  {
    nume = -nume * x * x;
    i = i+2; //deno = deno * (i+1)* (i+2);
    deno = deno * i * (i-1); // i=i+2;
    term = nume / deno;
    sum = sum + term;
  }while(fabs(term) >= 0.000001);

  printf("\nSin(%f) = %f", deg, sum);
  printf("\nSin(%f) = %f", deg, sin(x));
}