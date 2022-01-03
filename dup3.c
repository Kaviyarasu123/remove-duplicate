#include <stdio.h>
#define MAX_SIZE 30000


void removeDuplicates(char* string);
void removeAll(char* string, const char Remove, int index);


int main()

{
   char string[MAX_SIZE];
    printf("Enter a string: \n");
    scanf("%s",string);
    removeDuplicates(string);
    printf("remove duplicate elements: %s\n", string);
}


void removeDuplicates(char* string)
{
  int i = 0;
  while(string[i] != 0)
    {
        removeAll(string, string[i], i);
        i++;
    }
}
void removeAll(char* string, const char Remove, int index)
{
  int i, j;
  i = index+1;
  while(string[i] != 0)
  {
     if(string[i] == Remove)
      {
         j = i;
          while(string[j] != 0)
            {
             string[j] = string[j + 1];
             j++;
            }
      }
     i++;
   }
}

