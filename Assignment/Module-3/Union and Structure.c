
#include <stdio.h> 

struct Employee 
{
  int age;  
  char Name[60];
  char Department[30];
  float Salary;
};

union Person 
{
  int ag;  
  char Nam[60];
  char Departent[30];
  float Salar;
};

int main() 
{
  struct Employee emp1;
  union Person Person1;
    
  printf(" The Size of Employee Structure = %d\n", sizeof (emp1) );
  printf(" The Size of Person Union = %d\n", sizeof (Person1));

  return 0;
}
