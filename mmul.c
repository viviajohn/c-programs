//Program to perform matrix multiplication

#include<stdio.h>

int main()
{
  int m, n, p, q, i, j, k;

  printf("\nEnter the row and column size of A: ");
  scanf("%d%d", &m, &n);
  printf("\nEnter the row and column size of B: ");
  scanf("%d%d", &p, &q);

  int A[m][n], B[p][q], C[m][q]; //Declaration of dynamic arrays

  if(n != p)
  {
    printf("\nMatrix Multiplication not possible!");
    return 0;
  }

  //Entering elements of A
  printf("\nEnter elements of A: ");
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  //Entering elements of B
  printf("\nEnter elements of B: ");
  for(i=0; i<p; i++)
  {
    for(j=0; j<q; j++)
    {
      scanf("%d", &B[i][j]);
    }
  }

  //Displaying elements of A
  printf("\nThe elements of A are: \n");
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  //Displaying elements of B
  printf("\nThe elements of B are: \n");
  for(i=0; i<p; i++)
  {
    for(j=0; j<q; j++)
    {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }

  //Multiplication of A*B
  for(i=0; i<m; i++)
  {
    for(j=0; j<q; j++)
    {
      C[i][j] = 0;
      for(k=0; k<n; k++)
      {
        C[i][j] = C[i][j] + A[i][k]*B[k][j];
      } 
    }
  }

  //Displaying elements of C
  printf("\nThe elements of C are: \n");
  for(i=0; i<m; i++)
  {
    for(j=0; j<q; j++)
    {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
}