#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    // converting decimal to binary
    vector<int> arrBinary;
    int temp = 0, i = 0;
    while (n > 0)
    {
        int bit = !(n % 2);
        temp += (bit * 1 << i);
        i++;
        n = n / 2;
    }
    cout << "Inverted Number : " << temp << endl;
    return 0;
}
