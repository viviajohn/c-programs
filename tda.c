//Program to declare and print 2D array

#include<stdio.h>

int main()
{
  int i, j;

  int A[2][3] = {
                  {1}, 
                  {3, 5, 7}
                };
 
  printf("\nThe elements are: \n");
  
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}