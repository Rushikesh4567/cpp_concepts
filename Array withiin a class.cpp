#include<iostream>
using namespace std;
const m=50;

class ITEMS
{
	int itemCode[m];
	float itemPrice[m];
	int count;
	
	public:
		void CNT(void)
		{
			count=0;
		}
		
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayItems(void);
};

void ITEMS::getitem(void)
{
	cout<<"Enter item code: ";
	cin>>itemCode[count];
	
	cout<<"Enter item price ";
	cin>>itemPrice[count];
	
	count++;
}

void ITEMS::displaysum(void)
{
	int i;
	float sum=0;
	
	for(i=0;i<count;i++)
	{
		sum+=itemPrice[i];
	}
	
	cout<<"\nTotal sum is "<<sum;
}

void ITEMS::remove(void)
{
	int a;
	cout<<"Enter item code";
	cin>>a;
}
int main()
{
	
}
