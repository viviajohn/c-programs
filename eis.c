//Program to print isoceles, equilateral or scalene

#include<stdio.h>

int main()
{
  int s1, s2, s3;

  printf("\nEnter three sides of a triangle: ");
  scanf("%d%d%d", &s1, &s2, &s3);

  if(s1>0 && s2>0 && s3>0 && s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
  {
    if(s1==s2 && s2==s3 && s1==s3)
      printf("\nEquilateral Triangle");
    else if (s1==s2 || s2==s3 || s1==s3)
      printf("\nIsoceles Triangle");
    else
      printf("\nScalene Triangle");
  }
  else
    printf("\nInvalid Triangle");
  
}