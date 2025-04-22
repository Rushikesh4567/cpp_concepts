#include <iostream>
using namespace std;
template <typename T>
T findMax(T val1,T val2)
{
    return (val1>val2)?val1:val2;
}

template <typename T>
class Calculator
{
private:
    T num1,num2;

public:
    Calculator(T first,T second):num1(first),num2(second){}

    T add()
	{
		return num1+num2;
	}
    T subtract()
	{
		return num1-num2;
	}
    T multiply()
	{ 
		return num1*num2;
	}

    T divide()
    {
        if (num2!=0)
            return num1/num2;
        else
        {
            cout<< "Can not Divide by zero! error!\n";
            return 0;
        }
    }
};

int main()
{
    cout<<"Maximum of 15 and 45 is: "<<findMax(15,45)<<endl;

    
    Calculator<int>calcInt(15,45);
    cout<<"\nInteger Operations:\n";
    cout<<"15+45= "<<calcInt.add()<<endl;
    cout<<"15-45= "<<calcInt.subtract()<<endl;
    cout<<"15*45= "<<calcInt.multiply()<<endl;
    cout<<"15/45= "<<calcInt.divide()<<endl;

    
    Calculator<float>calcFloat(7.2f,3.6f);
    cout<<"\nFloat Operations:\n";
    cout<<"7.2+3.6= "<<calcFloat.add()<<endl;
    cout<<"7.2-3.6= "<<calcFloat.subtract()<<endl;
    cout<<"7.2*3.6= "<<calcFloat.multiply()<<endl;
    cout<<"7.2/3.6= " <<calcFloat.divide()<<endl;

    
    Calculator<double>calcDouble(52.75,13.25);
    cout<<"\nDouble Operations:\n";
    cout<<"52.75+ 3.25= "<<calcDouble.add()<<endl;
    cout<<"52.75-13.25= "<<calcDouble.subtract()<<endl;
    cout<<"52.75*13.25= "<<calcDouble.multiply()<<endl;
    cout<<"52.75/13.25= "<<calcDouble.divide()<<endl;

    return 0;
}

