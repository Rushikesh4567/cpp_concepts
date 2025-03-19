#include <iostream>
using namespace std;

// Base class
class Student {
public:
    void show() {
        cout << "I am a student." << endl;
    }
};

// Derived classes from Student
class Arts : public Student {
public:
    void show() {
        cout << "I am an Arts student." << endl;
    }
};

class Engineering : public Student {
public:
    void show() {
        cout << "I am an Engineering student." << endl;
    }
};

class Medical : public Student {
public:
    void show() {
        cout << "I am a Medical student." << endl;
    }
};

// Derived classes from Engineering
class Mechanical : public Engineering {
public:
    void show() {
        cout << "I am a Mechanical Engineering student." << endl;
    }
};

class Electrical : public Engineering {
public:
    void show() {
        cout << "I am an Electrical Engineering student." << endl;
    }
};

class Civil : public Engineering {
public:
    void show() {
        cout << "I am a Civil Engineering student." << endl;
    }
};

int main() {
    Student s;
    Arts a;
    Engineering e;
    Medical m;
    Mechanical mech;
    Electrical elec;
    Civil civ;

    s.show();
    a.show();
    e.show();
    m.show();
    mech.show();
    elec.show();
    civ.show();

    return 0;
}
