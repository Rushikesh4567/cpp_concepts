#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    
    Number operator-()
    {
        return Number(-value);
    }

    void show() {
        cout << "Value is: " << value << endl;
    }
};

int main() {
   
    Number n1(100);

    cout << "Original ";
    n1.show();

    Number n2 = -n1;

    cout<<"\nNegative ";
    n2.show();

    return 0;
}

