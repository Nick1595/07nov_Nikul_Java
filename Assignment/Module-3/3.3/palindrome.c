#include <stdio.h>
#include <string.h>
  
int main() 
{
   char inputArray[20], reversedArray[20];
 
   printf("Enter The String\n");
   scanf("%s", inputArray);
   strcpy(reversedArray, inputArray);
   strrev(reversedArray);
    

   if(strcmp(inputArray, reversedArray) == 0 )
      printf("%s is a palindrome.\n", inputArray);
   else
      printf("%s is not a palindrome.\n", inputArray);
       
   return 0;
}