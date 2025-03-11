#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {2,1,3,4,2,4,1};

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    int k = 3;
    int s = 0;
    int e = n - 1;
    int sum = 0;

    while (k != 0)
    {

        if (arr[s] >= arr[e])
        {
            sum += arr[s];
        }
        else
        {
            sum += arr[e];
        }

        s++;
        e--;
        k--;
    }

    cout << sum;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}