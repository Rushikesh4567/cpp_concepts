#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int roll_number;

public:
    Student() { // Changed from private to protected
        name = "Alex";
        roll_number = 1;
    }

    void setNumber(int n) {
        roll_number = n;
    }

    int getNumber() { // Changed return type to int
        return roll_number;
    }
};

class AnualTest : public Student { 
    int mark1, mark2;

public:
    AnualTest(int m1, int m2) : mark1(m1), mark2(m2) {} // Fixed constructor syntax

    int getNumber() {
        return Student::getNumber(); // Now correctly accessing the base class function
    }
};

int main() {
    AnualTest test1(22, 89);
    cout << "Roll number is "<<test1.getNumber(); // Fixed function call
    return 0;
}

