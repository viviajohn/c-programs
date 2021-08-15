//Program to find the average weight

#include<stdio.h>

int main()
{
  int nA, nB, wA, wB;

  printf("\nEnter number and weight of A: ");
  scanf("%d%d", &nA, &wA);

  printf("\nEnter number and weight of B: ");
  scanf("%d%d", &nB, &wB);

  printf("\nAverage : %f", (float)(nA*wA + nB*wB)/(nA+nB));
}