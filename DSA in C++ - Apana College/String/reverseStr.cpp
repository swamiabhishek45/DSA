#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Abhishek";
    char chArr[100] = "Abhishek";
    // reverse(str.begin(), str.end());

    // for (int i = 0; i < str.length() / 2; i++)
    // {
    //     swap(str[i], str[str.length() - 1 - i]);
    // }

    int low = 0;
    int high = strlen(chArr) - 1;

    while (low < high)
    {
        swap(chArr[low], chArr[high]);
        low++, high--;
    }

    cout << chArr << endl;
    return 0;
}