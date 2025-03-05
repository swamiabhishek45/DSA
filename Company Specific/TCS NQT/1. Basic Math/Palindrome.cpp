#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    int revNum = 0;
    int temp = num;
    while (num > 0)
    {
        int digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }

    if (temp != revNum)
        return false;
    else
        return true;
}

int main()
{
    int num = 121;

    cout << isPalindrome(num) << endl;

    int min = 100;
    int max = 150;
    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}