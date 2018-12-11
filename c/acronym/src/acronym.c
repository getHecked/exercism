#include <ctype.h>
#include <stdlib.h>

static int letter(int charac, int previous)
{
  if (isalpha(charac) && ((previous == ' ') || (previous == '-'))){
             return 1;
  }
else
{
  return 0;
}
  
}


static int words(const char input[])
{

   int temp = 0;
if (input == NULL){
      return temp;
 } 
 else{
  temp=1;
}
 

  for (size_t i = 1; input[i] != '\0'; ++i)
{
      if (letter(input[i], input[i - 1])){
         ++temp;             
      }
}  
 return temp;
}

char *abbreviate(const char string[])
{
   char *temp = NULL;


if (string == NULL || string[0] == '\0'){
          return NULL;
} 

   temp = calloc(words(string) + 1, sizeof string[0]);
   if (!temp){
      return NULL;
}            
   temp[0] = toupper(string[0]);    

   for (size_t i = 1, j = 1; string[i] != '\0'; ++i) {
      if (letter(string[i], string[i - 1])){
               temp[j++] = toupper(string[i]);
      }    
}
  
 return temp;
}

