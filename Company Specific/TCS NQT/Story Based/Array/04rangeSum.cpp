#include <bits/stdc++.h>
using namespace std;

int rangeSum(int i, int j)
{
    if (i >= j || i < 0 || j >= 10000)
    {
        return -1; // Return -1 for invalid input
    }

    return (j * (j + 1) / 2) - (i * (i - 1) / 2);
}

int main()
{
    int n;
    cin >> n;

    vector<string> results;

    while (n--)
    {
        int i, j;
        cin >> i >> j;
        int result = rangeSum(i, j);
        if (result == -1)
            results.push_back("invalid input i&j i<=j<10000");
        else
            results.push_back(to_string(result));
    }

    // Print all results in one line with space separation
    for (int i = 0; i < results.size(); i++)
    {
        if (results[i] == "invalid input i&j i<=j<10000")
        {
            cout << results[i];
        }
        else
        {
            cout << stoi(results[i]) << " ";
        }
    }

    return 0;
}
