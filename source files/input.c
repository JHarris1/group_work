#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
// ask the user for the amount of devices to order

void fctInput(int *iResistors, int *iCoils, int *iCapacitors, int *iLeds)
{
   //suggestion (do it for all 4 kinds of devices):

   
   printf("\nresistors:\t");
   scanf("%d",&*iResistors);
   __fpurge(stdin);
   
   printf("\nCoils:\t");
   scanf("%d",&*iCoils);
   __fpurge(stdin);

   printf("\nCapacitors:\t");
   scanf("%d",&*iCapacitors);
   __fpurge(stdin);

   printf("\nLEDs:\t");
   scanf("%d",&*iLeds);
   __fpurge(stdin);
}
