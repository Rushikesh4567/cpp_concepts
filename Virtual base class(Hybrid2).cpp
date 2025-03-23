#include <iostream>
using namespace std;

class A {
    int i;
};

class AB : virtual public A {  
    int j;
};

class AC : virtual public A {  
    int k;
};

class ABAC : public AB, public AC {  
    int l;
};

int main() {
    ABAC abac;
    cout << "Size of ABAC: " << sizeof(abac) << endl;
    return 0;
}

