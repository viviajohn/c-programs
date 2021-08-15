//Program to check validity of triangle using angles

#include<stdio.h>

int main()
{
  int a1, a2, a3;

  printf("\nEnter 3 angles of a triangle: ");
  scanf("%d%d%d", &a1, &a2, &a3);

  if(a1!=0 && a2!=0 && a3!=0 && (a1+a2+a3) == 180)
    printf("\nValid triangle!");
  else
    printf("\nInvalid triangle");
  
}