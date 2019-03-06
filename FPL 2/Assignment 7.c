#include<iostream>

using namespace std;

class electricity
{
	int units, cost, service_charge=75;
	public:
	void getdata();
	void calculate();
	void putdata();
};

int main()
{
	electricity bill;
	
	bill.getdata();
	
	bill.calculate();
	
	bill.putdata();
	
	return 0;
}

void electricity::getdata()
{
	cout << "\nEnter no. of units consumed: ";
	cin >> units;
}

void electricity::calculate()
{
	if(units<=100)
	{
		cost = service_charge + (units*0.90);
	}
	else if(units>100 && units<=200)
	{
		cost = service_charge + (100*0.90) + ((units-100)*1);
	}
	else
	{
		cost = service_charge + (100*0.90) + (100*1) + ((units-200)*1.30);
	}
}

void electricity::putdata()
{
	cout << "\nElectricity bill is Rs. " << cost << "\n";
}
