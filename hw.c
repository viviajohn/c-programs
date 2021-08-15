//Homework Question

#include<stdio.h>

int main()
{
  int a, b, c, x, y, z, p, q, r;

  printf("\nEnter three integer numbers: ");
  scanf("%d %*d %d", &a, &b, &c); // 1 2 3
  printf("%d %d %d", a, b, c);// 1 3 garbage value
  
  printf("\nEnter two 4 digit numbers: ");
  scanf("%2d %4d", &x, &y); //6789 4321
  printf("%d %d", x, y); //67 89

  printf("\nEnter two integer: ");
  scanf("%d %d", &a, &x); //44 66 -> 4321 44 66
  printf("%d %d", a, x); //4321 44

  printf("\nEnter a nine digit number: ");
  scanf("%3d %4d %3d", &p, &q, &r);//123456789 -> 66 123456789
  printf("%d %d %d", p, q, r);//66 1234 567

  printf("\nEnter two three digit numbers: ");
  scanf("%d %d", &x, &y); //123 456 -> 89 123 456
  printf("%d %d", x, y); // 89 123
}