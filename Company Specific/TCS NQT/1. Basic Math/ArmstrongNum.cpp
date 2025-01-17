#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int k = to_string(n).length(); // find lenght of num
    int sum = 0;
    int temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, k);
        temp /= 10;
    }

    cout << sum << " " << n;

    return sum == n;
}

int main()
{
    int n = 153;

    cout << isArmstrong(n);
    return 0;
}