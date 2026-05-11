// Recursive approach for checking palindrom

#include <iostream>
#include <string>

using namespace std;

int fun(int num)
{
	if (num == 0)
		return 0;

	return (num % 10) + fun(num / 10);
}

int main()
{
	cout << fun(29280);
	cin.get();
}
