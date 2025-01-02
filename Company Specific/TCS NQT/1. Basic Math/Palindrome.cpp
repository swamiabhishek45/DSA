#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int num)
{
    int revNum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }

    if (num != revNum)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int num = 123321;

    cout << isPalindrom(num);
    return 0;
}