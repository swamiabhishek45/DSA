#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l = 1, r = 5;
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += i;
    }

    cout << "Sum: " << sum;
    return 0;
}