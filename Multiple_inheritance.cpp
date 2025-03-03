#include<iostream>
using namespace std;

class Liquid
{
    public:
        void liquid_state()
        {
            cout<<"\nThis is liquid";
        }
};

class Fuel
{
    public:
        void fuel_type()
        {
            cout<<"\nThis is Fuel\n";
        }
};

class Petrol:public Liquid,public Fuel
{
    public:
        void petrol()
        {
            cout<<"\nPetrol is a liquid fuel which is used in vechicles.\n";
        }
};
int main()
{
	Petrol p;
	
	p.liquid_state();
	p.fuel_type();
	p.petrol();
}
