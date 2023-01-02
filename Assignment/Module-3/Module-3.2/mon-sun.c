// WAP to show monday to sunday using switch case 

#include<stdio.h>
void main()
{
    int Day;
    
    printf("Enter the choice : ");
    scanf("%d",&Day);
    
    switch(Day)
    {
        case 1:
           printf(" Today is Monday");
           break;
           
        case 2:
           printf("Today is Tuesday");
           break;
           
        case 3:
           printf("Today is Wednesday");
           break;
           
        case 4:
           printf("Today is Thursday");
           break;
           
        case 5:
           printf("Today is Friday");
           break;
           
        case 6:
           printf("Today is Saturday");
           break;
           
        case 7:
           printf("Today is Sunday");
           break;
           
        default:
           printf("Enter choice is unvalid");
           break;
        
    }
    
}
