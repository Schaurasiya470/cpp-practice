#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string str;
    getline(cin, str);
    vector<pair<string, int>> v(n);

    stringstream ss(str);
    for (int i = 0; i < n; i++)
    {
        string tempStr;
        getline(ss, tempStr, ',');
        stringstream sp(tempStr);
        string tempStr2;
        int age;
        sp >> tempStr2 >> age;
        v[i].first = tempStr2;
        v[i].second = age;
    }

    for (auto it : v)
    {
        cout << it.first << ": " << it.second << endl;
    }
}
