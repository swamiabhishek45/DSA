#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfSubArr(int arr[], int n, int k)
{
    vector<int> ans;

    for (int i = 0; i <= n - k; i++)
    {
        int maxSum = INT_MIN;
        for (int j = i; j < i+k; j++)
        {
            if (arr[j] >= maxSum)
            {
                maxSum = arr[j];
            }
        }
        ans.push_back(maxSum);
    }
    return ans;
}

int main()
{
    int n = 6;
    int arr[n] = {1, 2, 3, 1, 4, 5};

    int k = 3;

    vector<int> result = maxOfSubArr(arr, n, k);
    for (int val : result)
    {
        cout << val << " ";
    }
    return 0;
}