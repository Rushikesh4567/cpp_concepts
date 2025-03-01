#include <bits/stdc++.h>
using namespace std;
 

class A {
public:
    int a;
    void get_A_data()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
};
 

class B : public A {
public:
    int b;
    void get_B_data()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
};
 
class C : public B {
private:
    int c;
 
public:
    void get_C_data()
    {
        cout << "Enter value of c: ";
        cin >> c;
    }
 
    
    void sum()
    {
        int ans = a + b + c;
        cout << "sum: " << ans;
    }
};
int main()
{
    
    C c1;
 
    c1.get_A_data();
    c1.get_B_data();
    c1.get_C_data();
    c1.sum();
    return 0;
}
