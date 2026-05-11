#include <iostream>
using namespace std;

int main()
{
	int hcf = 1;
	int a, b;
	cin >> a >> b;
	int min = a < b ? a : b;
	for (int i = 1; i <= min; i++)
	{
		if (a % i == 0 and b % i == 0)
		{
			hcf = i;
		}
	}
	cout << "HCF:" << hcf;
}
