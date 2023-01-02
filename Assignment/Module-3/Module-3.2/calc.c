#include<stdio.h>
void main()
{
  char choice;
  int a,b;
  printf(" (FOR ADDITION +)\n (FOR SUBTRACTION -)\n (FOR MULTIPLICATION *)\n (FOR DIVISION /)\n (FOR MUDULO %)\n");
  printf("Enter choice = ");
  scanf("%c",&choice);
  
  printf("Enter the value A and B = \n");
  scanf("%d%d",&a,&b);
  

  switch(choice)
{

  case '+':
           printf("Addition =%d",a+b);
           break;

case '-':
           printf("Subtraction =%d",a-b);
           break;
case '*':
           printf("Multiples =%d",a*b);
           break;
case '/':
           printf("Division =%d",a/b);
           break;
case '%':
           printf("modulo =%d",a%b);
           break;

}
}
