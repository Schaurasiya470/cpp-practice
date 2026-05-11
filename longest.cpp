#include <iostream>

using namespace std;

int main()
{
	int x = 1, y;
	while (x < 100000)
	{
		if (x % 6 == 1 and x % 9 == 2 and x % 11 == 3)
		{
			cout << x;
			return 0;
		}
		x++;
	}
	if (x == 100000)
		cout << "No any Such number";
}
