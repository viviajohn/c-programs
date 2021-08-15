/*C program to accept length and width of a rectangle from user and find the area and perimeter of rectangle and display.*/

#include<stdio.h>

int main()
{
  float len, bre;

  printf("\nEnter length and breadth: ");
  scanf("%f%f", &len, &bre);

  printf("\nArea = %.3f sq.units", len * bre);
  printf("\nPerimeter = %.3f units", 2*(len+bre));
}