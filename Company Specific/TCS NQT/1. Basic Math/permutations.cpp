#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    return ans;
}

int main()
{
    int n = 5, r = 3;

    int num = fact(n);
    int den = fact(n - r);

    cout << num / den;
    return 0;
}