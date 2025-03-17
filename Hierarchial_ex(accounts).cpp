#include <iostream>
#include <string>
using namespace std;

// Base class
class Account {
protected:
    string accountHolder;
    double balance;

public:
    Account(string name, double bal) : accountHolder(name), balance(bal) {}
    virtual void display() 
	{
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
    virtual ~Account() {}
};

class Current : public Account 
{
private:
    double overdraftLimit;

public:
    Current(string name, double bal, double overdraft) 
        : Account(name, bal), overdraftLimit(overdraft) {}

    void display() override
	{
        cout << "\n[Current Account]\n";
        Account::display();
        cout << "Overdraft Limit: "<< overdraftLimit <<" Rupees"<< endl;
    }
};

// Derived class: Fixed Deposit Account
class FixedDeposit : public Account 
{
protected:
    double interestRate;

public:
    FixedDeposit(string name, double bal, double rate) 
        : Account(name, bal), interestRate(rate) {}

    virtual void display() override
	{
        cout << "\n[Fixed Deposit Account]\n";
        Account::display();
        cout << "Interest Rate: " << interestRate << "%\n";
    }
};

// Further derived classes of Fixed Deposit
class ShortTerm : public FixedDeposit 
{
public:
    ShortTerm(string name, double bal) 
        : FixedDeposit(name, bal, 5.0) {}  // Assume 5% interest

    void display() override
	{
        cout << "\n[Short Term Fixed Deposit]\n";
        FixedDeposit::display();
    }
};

class MediumTerm : public FixedDeposit
{
public:
    MediumTerm(string name, double bal) 
        : FixedDeposit(name, bal, 7.0) {}  // Assuming 7% interest

    void display() override
	{
        cout << "\n[Medium Term Fixed Deposit]\n";
        FixedDeposit::display();
    }
};

class LongTerm : public FixedDeposit
{
public:
    LongTerm(string name, double bal) 
        : FixedDeposit(name, bal, 10.0) {}  // Assuming 10% interest

    void display() override
	{
        cout << "\n[Long Term Fixed Deposit]\n";
        FixedDeposit::display();
    }
};

int main() {
    
    Current currentAcc("Alice", 5000, 2000);
    ShortTerm shortTermAcc("Bob", 10000);
    MediumTerm mediumTermAcc("Charlie", 20000);
    LongTerm longTermAcc("David", 50000);

   									
    currentAcc.display();								 // Displaying details
    shortTermAcc.display();
    mediumTermAcc.display();
    longTermAcc.display();

    return 0;
}

