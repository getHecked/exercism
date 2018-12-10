#include "isogram.h"
#include <ctype.h>
#include <stddef.h>
#include <stdint.h>

bool is_isogram(const char phrase[])
{
   int temp = 0;

   if (phrase == NULL)
{
      return false;
}
   for (int i = 0; phrase[i] != '\0'; ++i)
 {
      if (isalpha(phrase[i]))
 {
         int number = toupper(phrase[i]) - 'A';
         int test = 1 << number;

         if ((temp & test) > 0)
           { return false;}
         else{
            temp |= test;
} 
     }
   }

   return true;
}
