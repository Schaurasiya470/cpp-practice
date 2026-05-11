#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int sum(int = 2, int = 2);
int sum(char, char);

int main()
{

	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int x = i;
		if (isPrime(i))
		{

			while (n % x == 0)
			{
				cout << i << "\t";
				x = x * x;
			}
		}
	}
	cout << sum(5);
}
int sum(int c, int d)
{
	return c + d;
}
