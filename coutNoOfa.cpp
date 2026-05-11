#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str;
    cin >> str;
    srtingstream ss(str);

    int l;
    char temp;
    cin >> l;
    vector<char> arr;
    while (getline(ss, temp,''))
    {
        arr.push_back(temp);
    }
    for (char x : arr)
    {
        cout << x;
    }

    return 0;
}
