// WAP to show Vowel or Consonant using switch case

#include<stdio.h>
void main()
{
  char Alphabet;
  
  printf("Enter alphabet in lowercase only");
  printf("\nEnter the choice of Alphabet : ");
  scanf("%c",&Alphabet);
  
  switch(Alphabet)
  
  {
    case 'a' :
        printf(" Alphabet is Vowel");
        break;
        
    case 'e' :
        printf(" Alphabet is Vowel");
        break;
        
    case 'i' :
        printf(" Alphabet is Vowel");
        break;
        
    case 'o' :
        printf(" Alphabet is Vowel");
        break;
        
    case 'u' :
        printf(" Alphabet is Vowel");
        break;
        
    default :
        printf(" Alphabet is Consonant");
        break;
        
  }
}
