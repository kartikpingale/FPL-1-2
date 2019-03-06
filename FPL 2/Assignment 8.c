#include<iostream>

using namespace std;

class discount
{
	int cost, discount;
	public:
	void getdata();
	void calculate();
	void putdata();
};

int main()
{
	discount obj;
	
	obj.getdata();
	
	obj.calculate();
	
	obj.putdata();
	
	return 0;
}

void discount::getdata()
{
	cout << "\nEnter cost of goods purchased: ";
	cin >> cost;
}

void discount::calculate()
{
	if(cost<=1000)
	{
		discount = 0.05*cost;
	}
	else if(cost>1000 && cost<=2000)
	{
		discount = 0.15*cost;
	}
	else if(cost>2000 && cost<=5000)
	{
		discount = 0.20*cost;
	}
	else if(cost>5000 && cost<=10000)
	{
		discount = 0.35*cost;
	}
	else
	{
		discount = 0.50*cost;
	}
}

void discount::putdata()
{
	cout << "\nTotal cost: Rs. " << cost << "\nDiscount: Rs. " << discount << "\nAmount to be paid: Rs. " << cost-discount << "\n";
}
