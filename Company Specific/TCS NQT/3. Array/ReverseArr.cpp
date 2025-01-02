#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int n)
{
    int s = 0, e = n - 1;

    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
    }

}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    reverseArr(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}