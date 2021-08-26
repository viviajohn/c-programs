//Program to implement Linear Searching

#include<stdio.h>

int main()
{
  int n, i, ele;

  printf("\nEnter the number of elements: ");
  scanf("%d", &n);

  int A[n];

  printf("\nEnter array elements: ");
  for(i=0;i<n;i++)
    scanf("%d", &A[i]);
  
  printf("\nEnter search element: ");
  scanf("%d", &ele);

  for(i=0;i<n;i++)
  {
    if(ele == A[i])
    {
      printf("%d found at %d", ele, i+1);
      return 0;
    }
  }
  printf("%d not found", ele);
}