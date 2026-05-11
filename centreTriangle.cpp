#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - 1 - i; k++)
            cout << " ";

        for (int j = 0; j < (2 * i + 1); j++)
        {
            // cout<< "*";
            if (j <= n - 1)
                cout << j + 1;
            else
                cout << j - 1;
        }
        cout << endl;
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int k = 0; k < n - (i); k++)
            cout << " ";

        for (int j = 0; j < (2 * (i - 1) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
