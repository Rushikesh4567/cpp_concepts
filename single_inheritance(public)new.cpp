#include<iostream>
using namespace std;

class Parent{
	int a;
	public:
		int b;
		void get_ab();
		int get_a(void);
		void show_a();
		
};

class Child:public Parent{
	int c;
	public:
		int mul();
		void display();
};

void Parent::get_ab()
{
	a=5;
	b=10;
}

int Parent::get_a()
{
	return a;
}

void Parent::show_a()
{
	cout<<"\nValue of a= "<<a;
}

int Child::mul()
{
	c = b * get_a();
}

void Child::display()
{
	cout<<"\na = "<<get_a();
	cout<<"\nb = "<<b;
	cout<<"\nMultiplication is  = "<<c;
}
int main()
{
		Child c;
		
		c.get_ab();
		c.get_a();
		c.show_a();
		cout<<"\n";
		
		c.mul();
		c.display();
		
		cout<<"\nafter changing value of b, the multiplication is ";
		c.b=20;
		c.mul();
		c.display();
}
