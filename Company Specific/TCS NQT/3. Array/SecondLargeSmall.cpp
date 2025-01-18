#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr)
{
    int large = INT_MIN;
    int SLarge = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > large)
        {
            SLarge = large;
            large = arr[i];
        }
        else if (arr[i] > SLarge && arr[i] < large)
        {
            SLarge = arr[i];
        }
    }

    return SLarge;
}
int secondSmallest(vector<int> &arr)
{
    int small = INT_MAX;
    int SSmall = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < small)
        {
            SSmall = small;
            small = arr[i];
        }
        else if (arr[i] < SSmall && arr[i] > small)
        {
            SSmall = arr[i];
        }
    }

    return SSmall;
}

int main()
{
    vector<int> arr = {3, 1, 5, 7, 7, 2, 2, 3, 1};

    cout << "Second Largest: " << secondLargest(arr) << endl;
    cout << "Second Smallest: " << secondSmallest(arr) << endl;
    return 0;
}