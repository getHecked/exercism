#include "binary_search.h"

int *binary_search(const int value, const int *arr, const size_t length)
{

if (length==0 || arr == NULL)
{
  return NULL;
}

 const int *first = arr;
   const int *last = arr + length - 1;
   while (first <= last) {
      const int *middle = first + (last - first) / 2;
       if (*middle < value) {
         first = middle + 1;
      }
      else if (*middle > value) {
         last = middle - 1;
      }
 else 
{
         return (int *)middle;
      }
   }
   return NULL;
}
