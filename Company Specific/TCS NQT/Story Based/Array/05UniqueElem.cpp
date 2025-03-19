#include <bits/stdc++.h>
using namespace std;

int uniqueElem(int arr[], int n)
{
    int single = 0;
    for (int i = 0; i < n; i++)
    {
        single ^= arr[i];
    }
    return single;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << uniqueElem(arr, n);

    return 0;
}