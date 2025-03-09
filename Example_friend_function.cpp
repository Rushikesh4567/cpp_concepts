#include<iostream>
using namespace std;
class Sample
{
	int a;
	int b;
	public:
		void setvalue()
		{
			a=25;
			b=40;
		}
		friend float mean(Sample s);
};

float mean(Sample s)
{
	return float(s.a+s.b)/2.0;
}

int main()
{
	Sample x;			//object x
	x.setvalue();
	
	cout<<"Mean value= "<<mean(x)<<"\n";
	
	return 0;	
}
