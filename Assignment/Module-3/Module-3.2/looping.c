 1.
#include<stdio.h>
void main()
{
    int i;
     for(i=972;i>=897;i--)
     {
         printf("\n%d",i);
     }
}

2.
 #include<stdio.h>
void main()
{
	int i,odd=0,even=0, n[10];
		
	for( i=0; i<10; i++)
	{
	printf("Enter number: ");
	scanf("%d",&n[i]);
	

		if(n[i]%2==0) 
		{
			even++;
			
			
		}
		else
		{
			odd++;
			
			
		}
		
	}
	printf("No of even is %d\n",even);
	printf("No of odd is %d\n",odd);
}
