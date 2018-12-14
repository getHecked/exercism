#include "grains.h"

uint64_t square(uint8_t index)
{
   if ((!index) || (index >64))
 {
      return 0;
   }

   return (uint64_t) 1 << (index - 1);
}

uint64_t total(void)
{
   uint64_t temp = 0;

   for (uint8_t i = 1; i <= 64; i++) 

{
      temp += square(i);
   }

   return temp;
}
