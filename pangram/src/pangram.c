#include "pangram.h"
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *input)
{
  size_t length;
  if (input != NULL){
      length = strlen(input);
}
else{
   length = 0;
}
   bool exists[26];

for (size_t i=0; i<sizeof(exists);i++){
  exists[i] = 0;
}
  
 for (size_t i = 0; i < length; i++) {


      char temp = tolower(input[i]);

      if (isalpha(temp)) {
         exists[temp - 'a'] = true;
  }
  }

   for (size_t i = 0; i <26; i++) {
      if (!exists[i]) {
         return false;  }
}

   return true;
}
