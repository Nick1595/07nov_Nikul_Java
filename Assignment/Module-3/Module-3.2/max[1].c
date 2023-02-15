#include<stdio.h>
int main()
{
	int i,no,temp[5],size;
	printf("How many you want to enter digit:");
	scanf("%d",&size);
	printf("Enter value");
	scanf("%d",&no);
	for(i=0;i<size;i++)
	{
		temp[i]=no%10;
		no=no/10;
	}
	for(i=size-1;i>=0;i--)
	{
	if(temp[0]<temp[i])
	{
		temp[0]=temp[i];
	}
	}
		printf("max is %d",temp[0]);
	
}