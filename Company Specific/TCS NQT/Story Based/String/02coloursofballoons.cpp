#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char, int> m;
    char s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }

    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            cout << i.first;
        }
    }
    return 0;
}