//Program to declare and print 2D array
#include<stdio.h>

int main()
{
  int m, n, i, j;

  printf("\nEnter the row and column size of the matrix: ");
  scanf("%d%d", &m, &n);

  int A[m][n];

  printf("\nEnter array elements: ");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d", &A[i][j]);
    }
  }
  
  printf("\nArray elements are: \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}