//Managing input and output operations

#include<stdio.h>

int main( ) 
{
  char name[25] = "NEW DELHI 110002";

  printf("\n%s", name);
  printf("\n%20s", name);
  printf("\n%20.10s", name);
  printf("\n%.5s", name);
  printf("\n%-20.10s", name);
  printf("\n%5s", name);
}

/*
  %w.ps
  w-> width
  p-> precision

  %ws -> w>n : right aligned with w-n blank spaces in front

  %w.ps -> make 'w' boxes, write 'p' characters and it should be right aligned

  %.ps -> just write 'p' characters

  %-w.ps -> make 'w' boxes, write 'p' characters and it should be left aligned

  %ws: w<n: write string as it is

  scanf("[^\n]")

*/



