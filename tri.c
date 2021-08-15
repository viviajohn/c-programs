//Find if triangle is valid

#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, s;

  printf("\nEnter 3 sides: ");
  scanf("%f%f%f", &a, &b, &c);

  if((a>0) && (b>0) && (c>0) && (a+b>c) && (b+c>a) && (c+a>b)) 
    printf("\nValid Traingle");
  else 
  {
    printf("\nInvalid Triangle");
    return 0;
  }

  s = (a+b+c)/2;

  printf("\nArea : %f", sqrt(s*(s-a)*(s-b)*(s-c)));
}