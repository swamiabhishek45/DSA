#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num)
{
    int ans = 0;

    while (num > 0)
    {
        int digit = num % 10;
        ans = (ans * 10) + digit;
        num /= 10;
    }

    return ans;
}

int main()
{
    int num = 12345;

    cout << reverseNum(num);
    return 0;
}