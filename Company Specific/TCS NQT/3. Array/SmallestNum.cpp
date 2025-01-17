#include <bits/stdc++.h>
using namespace std;

int smallestNum(int arr[], int n)
{
    sort(arr, arr + n);

    return arr[0];
}

int minVariable(int arr[], int n)
{
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int n = 5;
    int arr[n] = {2, 5, 1, 3, 0};

    cout << smallestNum(arr, n);
    cout << minVariable(arr, n);
    return 0;
}