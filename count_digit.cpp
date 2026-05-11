#include <iostream>
using namespace std;

int main()
{

	int count = 0;
	long long n = 12345555555555;

	while (n > 0)
	{
		n /= 10;
		count++;
	}
	cout << count;
}
