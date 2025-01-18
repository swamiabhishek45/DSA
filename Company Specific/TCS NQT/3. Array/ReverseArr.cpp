#include <bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    reverseArr(arr);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}