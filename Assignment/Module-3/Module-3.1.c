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
             int l;
             int w;
             int b;
             int h;
             float areaC;
             float areaR;
             float areaT;
	
	     printf("enter the value of radius : ");
	     scanf("%d",&r);
       
             printf("enter the value of length : ");
	     scanf("\n %d",&l);
	
	     printf("enter the value of width : ");
	     scanf("\n %d",&w);
       
            printf("enter the value of base : ");
	    scanf("\n%d",&b);
	
	     printf("enter the value of height : ");
	     scanf("\n%d",&h);
	
	 areaC = pi *r*r;
	 printf("\n area of circle is : %f",areaC);
       
         areaR = l*w;
	 printf("\n area of rectengle is : %f",areaR);
       
         areaT = 0.5*b*h;
	 printf("\n area of tringle is : %f",areaT);
       
     }	
     
     
                                                 Q-4
						 
	#include<stdio.h>
	
	void main()
{
	float I;
	int principle;
	int time;
	float rate;
	
	printf("Enter principle : ");
        scanf("%d", &principle);

        printf("Enter time: ");
        scanf("%d", &time);

        printf("Enter rate of interst: ");
        scanf("%f", &rate);

  
        I = (principle * time * rate) / 100;

   
    printf("Simple Interest = %f", I);

}
                                                 Q - 5



// WAP to check if the given year is a leap year or not.

#include <stdio.h>

void main() 
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   
   if (year % 4 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }
}






	                                         Q - 6
						 
// WAP to convert years into days and days into years.

#include<stdio.h>

int main()
{
	float year;
	int days;
	char a;
	
	printf("\n d = year to days \n y = days to year \n " );
	
	printf("\n Enter d or y = ");
	scanf("%c",&a);
	
	if(a=='d')
	{
		
	    printf("\n Enter no. of years = ");
	    scanf("%f",&year);
	    days=year*365;
	    printf(" %f Year = %d days",year,days);
	}
	else if(a=='y')
	{
		printf("\n Enter no. of days = ");
	    scanf("%d",&days);
	    year=days/365;
	    printf(" \n %d days = %f Year ",days,year);
	}
	else
	{
		printf(" \n Please enter a valid input......");
	}
	return 0;
}						 
