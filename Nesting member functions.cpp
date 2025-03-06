#include<iostream>
using namespace std;

class Item
{
	int m,n;
	
	public:
		void input(void);
		void output(void);
		int display(void);	
};

void Item::display(int)
{
	if(m>=n)
	{
		return m;
	}
	else
	{
		return n;
	}
}

void Item::input(void)
{
	cout<<"enter two numbers "<<endl;
	cin>>m>>n;
}

void Item::output(void)
{
	cout<<"Largest number is "<<display()<<endl;
}
int main()
{
	Item x;
	x.input();
	x.output();
	
	return 0;
}
