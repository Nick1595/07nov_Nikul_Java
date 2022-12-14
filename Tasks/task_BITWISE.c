#include<stdio.h>
void main()
{
	int A,B;
    int ans;
   
   
   printf("ENTER VALUE A & B =");
   scanf("%d%d",&A,&B);
	
ans=A&B;
printf("Bitwise AND =%d \n",ans);

ans=A|B;
printf("Bitwise OR =%d\n",ans);


ans=A^B;
printf("Bitwise EXOR =%d\n",ans);

ans=~B;

ans=1<<A;
printf("Bitwise shift left=%d \n",ans);	

ans=1>>A;
printf("Bitwise shift right =%d \n",ans);

	
}
