#include <bits/stdc++.h>
using namespace std;

bool subarrORnot(int arr1[], int n, int arr2[], int m)
{
    if (m > n)
        return false;

    for (int i = 0; i < m; i++)
    {
        bool present = false;
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                present = true;
                break;
            }
        }
        if (present == false)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << subarrORnot(arr1, n, arr2, m);

    return 0;
}