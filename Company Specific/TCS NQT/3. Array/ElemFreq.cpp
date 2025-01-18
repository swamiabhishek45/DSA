#include <bits/stdc++.h>
using namespace std;

int elemOccurFreq(vector<int> &arr)
{
    unordered_map<int, int> map;

    for(int i = 0; i<arr.size(); i++){
        map[arr[i]]++;
    }
}

int main()
{
    vector<int> arr = {10, 5, 10, 15, 10, 5};

    cout << elemOccurFreq(arr);
    return 0;
}