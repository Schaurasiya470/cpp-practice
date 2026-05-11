#include <iostream>
#include <vector>
#include <sstream>
#include <typeinfo>

using namespace std;

int main()
{
	cout << "Enter String : ";
	string str;

	getline(cin, str);
	str = str.substr(1, str.size() - 2);
	stringstream tempCin(str);

	string word;

	while (getline(tempCin, word, ','))
	{
		cout << word << "-> ";
		cout << typeid(word).name() << endl;
	}

	// cout << str<< endl;

	return 0;
}
