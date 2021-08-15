//Program to print the electricity bill

#include<stdio.h>

int main()
{
  char name[25];
  float units, charge, totamt;

  printf("\nEnter consumer name: ");
  scanf("%s", name); //no &
  //gets(name);

  printf("\nEnter units:");
  scanf("%f", &units);

  if(units<0)
  {
    printf("\nInvalid units!");
    return 0;
  }

  if((units >=0) && (units<200))
    charge = 0.8*units;

  else if((units>=201) && (units<300))  
    charge = 0.8*200 + 0.9 * (units - 200);

  else if(units >300) 
    charge = 0.8*200 + 0.9 *100 + 1 * (units-300);

  totamt = charge+100;

  if(totamt>400)
    totamt = totamt+0.15*totamt;

  printf("\nName: %s", name);
  printf("\nUnits: %f", units);
  printf("\nTotal Amount: Rs. %.2f", totamt);
}