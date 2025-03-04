#include <iostream>
using namespace std;

class B
{
    int a;
    public:
        int b;
        void get_ab(int m,int n);
        void show_ab(void);
};

class D:public B
{
    int c;
    public:
        void display(void);
};

void B::get_ab(int m,int n)                        //functions of base class
{
    a=m;
    b=n;
}



void B::show_ab()                            //functions of base class
{
    cout<<"\na= "<<a<<"\n";
    cout<<"\nb= "<<b<<"\n";
}



void D::display()                           //functions of derived class
{
    cout<<"\n Single Inheritance is occured"<<endl;
}
int main()
{

    D d1;
    
    d1.get_ab(5,10);
    d1.show_ab();
    
    d1.display();
    
    return 0;
}
