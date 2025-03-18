#include<iostream>
using namespace std;

class Students{
	protected:
		int roll_number;
	public:
		void getNumber(int i)
		{
			roll_number=i;
		}
		void putNumber()
		{
			cout<<"Roll number is "<<roll_number;
		}
};

class Test:virtual public Students
{
	protected:
		float sub1=0.0,sub2=0.0;
		
	public:
		void getMarks(float a,float b)
		{
		 	sub1=a;
			sub2=b;	
		}
		void putMarks()
		{
			cout<<"\nMarks obtained in\n";
			cout<<"subject 1 = "<<sub1;
			cout<<"\nsubject 2 = "<<sub2;
		}
};

class Sports:virtual public Students{
	protected:
		float score;
	public:
		void getScore(float x)
		{
		 	score=x;	
		}
		void putScore()
		{
			cout<<"\nscore is  "<<score;
		}
};

class Result:public Test,public Sports
{
	protected:
		float total=0.0;
	public:
		void display()
		{
			total=sub1+sub2+score;
			cout<<"\nTotal score is "<<total;
		}
};
int main()
{
	Result r;
	r.getNumber(1);
	r.putNumber();
	
	r.getMarks(50.0,60.0);
	r.putMarks();
	
	r.getScore(80.0);
	r.putScore();
	
	r.display();
}
