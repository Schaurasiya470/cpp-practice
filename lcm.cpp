#include <iostream>
using namespace std;

int main()
{
	int lcm = 1;
	int a, b;
	cin >> a >> b;
	int max = a > b ? a : b;

	for (int i = max; i <= a * b; i = i + max)
	{
		if (i % a == 0 and i % b == 0)
		{
			lcm = i;
			break;
		}
	}
	cout << "LCM :" << lcm;
}
