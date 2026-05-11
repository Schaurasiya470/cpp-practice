#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int row = 1; row <= n * 2 - 1; row++)
	{
		if (row <= n)
		{
			for (int col = 1; col <= row; col++)
				cout << "*";
		}
		else
		{
			for (int col = 2 * n - row; col >= 1; col--)
				cout << "*";
		}
		cout << endl;
	}
}
