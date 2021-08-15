//Managing input and output operations

#include<stdio.h>
#include<ctype.h>
int main( ) 
{
  int count;
  char code;
  float price;
  char product[10];

  printf("\nEnter count, code, price and product name: ");
  scanf("%d %c %f %s", &count, &code, &price, product);

  printf("\nCount = %d\nCode = %c\nPrice = Rs. %.2f\nName: %s", count, code, price, product);

  return 0;
}