#include <bits/stdc++.h>

using namespace std;
int sumOfDigit(int);

int main()
{
    cout << 2 * sumOfDigit(3 * sumOfDigit(10));
    return 0;
}

int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
