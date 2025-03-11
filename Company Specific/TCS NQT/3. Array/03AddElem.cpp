#include <bits/stdc++.h>
using namespace std;

int insertAtBegin(int *arr, int n)
{
    int val = 10;

    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = val;
}

int insertAtEnd(int *arr, int n)
{
    int val = 20;
    arr[n] = val;
}

int insertAtAnyPos(int *arr, int n, int k)
{
    int val = 30;
    for (int i = n; i >= k; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[k - 1] = val;
}

int main()
{
    int n = 5;
    int arr[6] = {1, 2, 3, 4, 5};

    cout << "Before insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // insertAtBegin(arr, n);
    // insertAtEnd(arr, n);
    insertAtAnyPos(arr, n, 4);

    cout << "After insertion: ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}