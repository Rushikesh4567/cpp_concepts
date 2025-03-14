#include<iostream>
using namespace std;

class Student											//Parent class
{
	protected:
		int roll_number;
	public:
		void get_number(int);
		void put_number();
};

void Student::get_number(int i)						//functions of parent class
{
	roll_number=i;
}

void Student::put_number()
{
	cout<<"\nThe roll number is "<<roll_number;
}

class Test:public Student							//First derived class
{
	protected:
		float ANN,SE;
	public:
		void get_marks(float,float);
		void put_marks();
};

void Test::get_marks(float x,float y)						//functions of parent class
{
	ANN=x;
	SE=y;
}

void Test::put_marks()
{
	cout<<"\nThe marks of 1st subject is "<<ANN;
	cout<<"\nThe marks of 2nd subject is "<<SE;
}

class Result:public Test							//Second derived class
{
	protected:
		float total=0.0;
	public:
		void display();	
};

void Result::display()
{
	total = ANN+SE;
	cout<<"\nThe result of student is\n";
	put_number();
	put_marks();
	cout<<"\nThe total of both subjects is "<<total;
}

int main()
{
	Result s1;
	s1.get_number(4);
	s1.get_marks(14.0,18.0);
	s1.display();
}
