#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int row = 1; row <= 2 * n - 1; row++)
	{
		int Noofloop = row <= n ? row : 2 * n - row;
		int Noofspace = row <= n ? n - row : row - n;
		for (int space = 1; space <= Noofspace; space++)
			cout << " ";

		for (int col = 1; col <= Noofloop; col++)
			cout << "* ";
		cout << endl;
	}
}
