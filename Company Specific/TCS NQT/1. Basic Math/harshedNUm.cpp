#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 378;
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        sum += temp % 10;
        n /= 10;
    }

    if (n % sum == 0)
        cout << n << "is harshed number";
    else
        cout << n << "is not harshed number";

    return 0;
}