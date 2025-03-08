#include<iostream>
using namespace std;

class Haris;
class Digya {
private:
    int money = 20;
    friend void Navnath(Digya,Haris);
};

class Haris {
private:
    int money = 50;
    friend void Navnath(Digya, Haris);
};

void Navnath(Digya n1, Haris n2) 
{ 
    cout << "Sum is " << n1.money + n2.money << endl;
}

int main() {
    Digya obj1;
    Haris obj2;

    Navnath(obj1, obj2); 
    return 0;
}

