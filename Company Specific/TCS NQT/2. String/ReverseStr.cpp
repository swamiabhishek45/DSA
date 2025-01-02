#include <bits/stdc++.h>
using namespace std;

string reverseStr(string str)
{
    int s = 0, e = str.length() - 1;

    while (s <= e)
    {
        // char demo = str[s];
        // str[s] = str[e];
        // str[e] = demo;
        // s++;
        // e--;

        swap(str[s++], str[e--]);
    }

    return str;
}

int main()
{
    string str = "xyz abc";
    cout << reverseStr(str) << endl;

    for (int i = 0, j = str.length() - 1; i <= j; i++, j--)
    {
        swap(str[i], str[j]);
    }
    cout << str;
}