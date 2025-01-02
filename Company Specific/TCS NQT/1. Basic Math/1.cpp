#include <bits/stdc++.h>
using namespace std;

int multipleSum(int n)
{
    int TotalSum = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = 10 * i;

        TotalSum += sum;
    }
    return TotalSum;
}

int main()
{
    int n = 30;
    // cout << "Enter the value of n: ";
    // cin >> n;

    // cout << "Multiple of first " << n << " natural numbers is: ";
    cout << multipleSum(n) << endl;

    int sum = n * 55;
    // int sum = 10 * (n * (n + 1)) / 2;

    cout << sum;

    return 0;
}