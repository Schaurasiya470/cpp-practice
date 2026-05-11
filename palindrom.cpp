// Itrative approch for checking palindrom

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;

	cin >> name;
	int j = name.length() - 1, i;
	for (i = 0; i <= j; i++, j--)
	{
		if (name[i] != name[j])
		{
			cout << "not palindrom";
			cin.get();
			return 0;
		}
	}
	cout << "palindrom";
	cin.get();
	return 0;
}
