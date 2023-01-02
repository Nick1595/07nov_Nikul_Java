
#include<stdio.h>
void main()
{
    int A;
    int B;
    
    printf("Enter  value of A = ");
    scanf("%d",&A);
    
    printf("Enter  value of B = ");
    scanf("%d",&B);
    
    A = A+B;
    B = A-B;
    A = A-B;
    
    printf("\nNew value of A is %d",A);
    printf("\nNew value of B is %d",B);
}
