#include <iostream>
using namespace std;

int main()
{

	int row, col;
	int n = 5;
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= n; col++)
		{
			if (col <= n - row)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}
