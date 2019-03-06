#include<iostream>
#define SIZE 3

using namespace std;

class matrix
{
	int n[SIZE][SIZE];
	public:
	matrix();
	void getMatrix();
	void putMatrix();
	void add(matrix &x, matrix &y);
	void subtract(matrix &x, matrix &y);
	void multiply(matrix &x, matrix &y);
};

int main()
{
	matrix A, B, C;
	int choice;
	
	cout << "\nEnter matrix A\n";
	A.getMatrix();
	cout << "\nEnter matrix B\n";
	B.getMatrix();
	cout << "\nMatrix A\n";
	A.putMatrix();
	cout << "\nMatrix B\n";
	B.putMatrix();
	
	do
	{
		cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Exit\nEnter your choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				{
					C.add(A, B);
					C.putMatrix();
					break;
				}
			case 2:
				{
					C.subtract(A, B);
					C.putMatrix();
					break;
				}
			case 3:
				{
					C.multiply(A, B);
					C.putMatrix();
					break;
				}
			case 4:	break;
			default:
				{
					cout << "Invalid choice!";
					break;
				}
		}
	}
	while(choice!=4);
	
	return 0;
}

matrix::matrix()
{
	int i, j;
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			n[i][j]=0;
		}
	}
}

void matrix::getMatrix()
{
	int i, j;
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			cin >> n[i][j];
		}
	}
}

void matrix::putMatrix()
{
	int i, j;
	cout << "\n";
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			cout << n[i][j] << "\t";
		}
		cout << "\n";
	}
}

void matrix::add(matrix &x, matrix &y)
{
	int i, j;
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			n[i][j] = x.n[i][j] + y.n[i][j];
		}
	}
}

void matrix::subtract(matrix &x, matrix &y)
{
	int i, j;
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			n[i][j] = x.n[i][j] - y.n[i][j];
		}
	}
}

void matrix::multiply(matrix &x, matrix &y)
{
	int i, j, k, sum=0;
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			for(k=0; k<SIZE; k++)
			{
				sum += x.n[i][k]*y.n[k][j];
			}
			n[i][j]=sum;
			sum=0;
		}
	}
}
