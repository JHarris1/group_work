#include "./header files/input.h"
#include "./header files/output.h"
#include "./header files/resistors.h"
#include "./header files/coils.h"
#include "./header files/capacitors.h"
#include "./header files/leds.h"

int main()
{
   int iRes, iCoi, iCap, iLed;
   float fResPrice, fCoiPrice, fCapPrice, fLedPrice;

   // input
   fctInput(&iRes,&iCoi,&iCap,&iLed);
   
   // calculation resistors
   fResPrice=fctResistors(iRes);
   
   // calculation coils
   fCoiPrice=fctCoils(iCoi);
   
   // calculation capacitors
   fCapPrice=fctCapacitors(iCap);
   
   // calculation LEDs
   fLedPrice=fctLeds(iLed);

   // print out
   fctOutput(fResPrice,fCoiPrice,fCapPrice,fLedPrice);

   return 0;
}
