#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    // cout << accumulate(arr, arr + n, sum);
    return 0;
}