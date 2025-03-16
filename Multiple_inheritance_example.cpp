#include <iostream>
using namespace std;

class A 
{
    int a;

public:
    void get_a(int i) 
	{ a = i; 
	}
    void put_a() 
	{ cout << a << " "; 
	}
    int getA() 
	{ return a; 
	} 
};

class B 
{
    int b;

public:
    void get_b(int j) 
	{ 
		b = j; 
	}
    void put_b() 
	{
		 cout << b << " ";
	}
    int getB() 
	{	
		 return b;
	} 
};

class C : public A, public B 
{
    int c;

public:
    void display() 
	{
        c = getA() * getB(); 
        cout << "\nThe multiplication is " << c;
    }
};

int main() {
    C c1;

    c1.get_a(10);
    c1.get_b(15);

    cout << "\nThe values of a and b are ";
    c1.put_a();
    c1.put_b();

    c1.display();

    return 0;
}

