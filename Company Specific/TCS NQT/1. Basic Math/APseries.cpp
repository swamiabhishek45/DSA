#include <iostream>
using namespace std;

int main()
{
    int n = 8, d = 5, a = -2;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a += d;
    }

    cout << sum;

    return 0;
}
