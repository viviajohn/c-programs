//Program to print the roots of a quadratic equation

#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, D, r1, r2, r, rp, ip;

  printf("\nEnter the coefficients: ");
  scanf("%f%f%f", &a, &b, &c); // 1 3 1

  if(a==0)
  {
    printf("\nLinear Equation Error!");
    return 0;
  }

  D = b*b - 4*a*c;

  if(D>0)
  {
    r1 = (-b + sqrt(D)) / (2 *a);
    r2 = (-b - sqrt(D)) / (2 *a);

    printf("\nRoots are real and distinct.");
    printf("\nR1 = %.3f\nR2 = %.3f", r1, r2);
  }

  else if (D==0)
  {
    r = -b / (2*a);

    printf("\nRoots are real and equal.");
    printf("\nR = %.3f", r);
  }

  else if (D<0)
  {
    rp = -b / (2*a);
    ip = sqrt(-D) / (2*a);

    printf("\nRoots are imaginary.");
    printf("\nR1 = %.3f + %.3f i\nR2 = %.3f - %.3f i", rp, ip, rp, ip);
  }
}