                                                                     Q - 1

/* WAP Display This Information using printf 
1. Your Name 
2. Your Birth date
3. Your Age 
4. Your Address*/

#include<stdio.h>

void main()
{
	printf("Name : Nikul \n");
	printf("DOB : 01/07/2004 \n");
	printf("AGE : 19");
    printf("Address : 8th floor,808 bhurj khalifa , Dubai");
		
	
	
}


                                                              Q - 2
							      
							       
							       
#include<stdio.h>
void main ()
{
	int A ;
	int B ;
	
	printf("Enter the value of A=");
	scanf("%d",&A);
	printf("Enter the value of B=");
	scanf("%d",&B);
	
	
	printf("A + B = %d \n",A+B);
	printf("A - B = %d \n",A-B);
    printf("A * B = %d \n",A*B);
	printf("A / B = %d \n",A/B);
    printf("A % B = %d \n",A%B);	
}
                                                        Q - 3	
							
							
/* wap to find area of circle */
#include<stdio.h>

void main()
{
	const pi = 3.14;
	int r;
	float area;
	
	printf("enter the value of radius : ");
	scanf("%d",&r);
	
	area = pi *r*r;
	printf("\n area of circle is : %f",area);
}	
							
							