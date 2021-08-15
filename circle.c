//Program to find the area of a circle

#include<stdio.h>
#define PI 3.141592

int main()
{
  //const float PI = 3.141592;
  float rad;

  printf("\nEnter the radius: ");
  scanf("%f", &rad);

  printf("\nArea of circle = %f sq.units", PI * rad *rad);
}