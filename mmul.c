//Program to perform matrix multiplication

#include<stdio.h>

int main()
{
  int m, n, p, q, i, j, k;

  printf("\nEnter the row-size and column-size of A: ");
  scanf("%d%d", &m, &n);
  printf("\nEnter the row-size and column-size of B: ");
  scanf("%d%d", &p, &q);

  if(n!=p)
  {
    printf("\nMatrix Multiplication not possible!");
    return 0;
  }

  int A[m][n], B[p][q], C[m][q];

  printf("\nEnter the element of A: ");
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      scanf("%d", &A[i][j]);

  printf("\nEnter the element of B: ");
  for(i=0; i<p; i++)
    for(j=0; j<q; j++)
      scanf("%d", &B[i][j]);

  printf("\nThe elements of A are: \n");
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
      printf("%d ", A[i][j]);
    printf("\n");
  }

  printf("\nThe elements of B are: \n");
  for(i=0; i<p; i++)
  {
    for(j=0; j<q; j++)
      printf("%d ", B[i][j]);
    printf("\n");
  }

  //Matrix Multiplication
  for(i=0; i<m; i++)
  {
    for(j=0; j<q; j++)
    {
      C[i][j] = 0;

      for(k=0; k<n; k++)
      {
        C[i][j] = C[i][j] + A[i][k] * B[k][j];
      }
    }
  }

  printf("\nResultant Matrix: \n");
  for(i=0; i<m; i++)
  {
    for(j=0; j<q; j++)
      printf("%d ", C[i][j]);
    printf("\n");
  }

}