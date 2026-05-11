#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int mid = n / 2 + 1;
	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= n; col++)
		{
			if (row == mid || col == mid || (col == 1 && row <= mid) || (col == n && row > mid) || (row == 1 && col >= mid) || (row == n && col < mid))
				cout << "* ";
			else
				cout << "  ";
		}

		cout << endl;
	}
}
