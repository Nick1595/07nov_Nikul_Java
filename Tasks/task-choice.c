#include<stdio.h>

void main()
{
	char a,b;
	
	printf("\n h='hotdrink'\n c='colddrink' \n d='dinner' ");
	
	printf("\n Enter choice from c & h = ");
	scanf("%c%c",&a,&b);
	
	
	if((a == 'c' || a == 'h') && b == 'd')
	{
		printf("\n your choice is %c ",a);
		printf("\n YOUR DINNER IS READY \n .THANK FOR VISITING ");
	}
	else
	{
		printf("YOUR CHOICE IS NOT IN MENU");
	}	
}
