#include<iostream>
using namespace std;

class student
{
	public:
		int percentage;
		
		int sgetdata()
		{
			cout<<endl<<"Enter Percentage of student:";
			cin>>percentage;
			cout<<"Your Percentage is:"<<percentage;
			return 0;
		}
};

class teacher
{
	public:
		int salary;
		
		int tgetdata()
		{
			cout<<endl<<"Enter salary of teacher:";
			cin>>salary;
			cout<<"your salary is:"<<salary;
			return 0;
		}
};

class person : public student, public teacher
{
	public:
		char name[10];
		int age;
		
		int pgetdata()
		{
			cout<<endl<<"Enter Your Name:";
			cin>>name;
			cout<<"your Name is:"<<name;
			cout<<endl<<"Enter Your Age:";
			cin>>age;
			cout<<"your Age is:"<<age;
			return 0;
		}
};

int main()
{
	person p1;
	p1.sgetdata();
	p1.tgetdata();
	p1.pgetdata();
	return 0;
}
