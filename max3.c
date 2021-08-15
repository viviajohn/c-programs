//Program to find maximum of three numbers

#include<stdio.h>

int main()
{
  int a, b, c, max;

  printf("\nEnter 3 numbers: ");
  scanf("%d%d%d", &a, &b, &c);

  if(a>b) 
  {
    if(a>c)
      max = a;
    else
      max = c;
  }
  else
  {
    if(b>c)
      max = b;
    else
      max = c;
  }

 //max = (a>b)?((a>c) ? a : c): ((b>c) ? b : c) ;

 printf("Greatest number is %d", max);

/*
  if((a>b) && (a>c))
    printf("\na is greatest");
  else if ((b>a) && (b>c))
    printf("\nb is greatest");
  else
    printf("\nc is greatest");*/
}