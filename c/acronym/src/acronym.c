#include <ctype.h>
#include <stdlib.h>

static int first_letter(int character, int prev_char)
{
   return isalpha(character) && ((prev_char == ' ') || (prev_char == '-')) ? 1 : 0;
}

static int count_words(const char phrase[])
{
   int count = 0;

   if (phrase != NULL)
{
      count = 1;              
 }  else
  {    return count;
}
   for (size_t i = 1; phrase[i] != '\0'; ++i)
      if (first_letter(phrase[i], phrase[i - 1]))
         ++count;             
   return count;
}

char *abbreviate(const char phrase[])
{
   char *acronym = NULL;

   if (phrase == NULL || phrase[0] == '\0')
      return NULL;            
   acronym = calloc(count_words(phrase) + 1, sizeof phrase[0]);
   if (!acronym)
      return NULL;            
   acronym[0] = toupper(phrase[0]);    

   for (size_t i = 1, j = 1; phrase[i] != '\0'; ++i) {
      if (first_letter(phrase[i], phrase[i - 1]))
         {acronym[j++] = toupper(phrase[i]);}    
   }
   return acronym;
}
