#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year = 2025;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}