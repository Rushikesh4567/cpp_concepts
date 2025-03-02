// C++ program for Hierarchical Inheritance 
#include<iostream> 
using namespace std; 

class A 
{ 
public: 
void show_A() { 
	cout<<"class A\n"<<endl; 
} 
}; 
class B : public A
{ 
public: 
void show_B() { 
	cout<<"class B"<<endl; 
} 
}; 

class C : public A 
{ 
public: 
void show_C() { 
	cout<<"class C is subclass of \t"<<endl; 
} 
}; 

int main() 
{ 
B b;
b.show_B(); 
	
C c; 
c.show_C(); 

return 0; 
} 


