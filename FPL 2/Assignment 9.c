#include<iostream>

using namespace std;

class transport
{
	int weight, cost;
	public:
	void getdata();
	void calculate();
	void putdata();
};

int main()
{
	transport obj;
	
	obj.getdata();
	
	obj.calculate();
	
	obj.putdata();
	
	return 0;
}

void transport::getdata()
{
	cout << "\nEnter weight of parcel: ";
	cin >> weight;
}

void transport::calculate()
{
	if(weight<=15)
	{
		cost = weight*20;
	}
	else if(weight>15 && weight<=35)
	{
		cost = (15*20) + ((weight-15)*10);
	}
	else if(weight>35 && weight<=55)
	{
		cost = (15*20) + (20*10) + ((weight-35)*8);
	}
	else
	{
		cost = (15*20) + (20*10) + (20*8) + ((weight-55)*5);
	}
}

void transport::putdata()
{
	cout << "\nTotal cost: Rs. " << cost << "\n";
}
