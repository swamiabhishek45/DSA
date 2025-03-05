#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;

    int sum = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == 0 || i == 1)
            {   
                sum += i;
            }
            else
            {
                sum = sum + i + n / i;
            }
        }
    }

    if (sum == n)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
    return 0;
}