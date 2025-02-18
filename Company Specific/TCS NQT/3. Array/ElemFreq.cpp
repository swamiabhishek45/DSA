#include <bits/stdc++.h>
using namespace std;

void elemOccurFreq(vector<int> &arr)
{
    unordered_map<int, int> map;

    for(int i = 0; i<arr.size(); i++){
        map[arr[i]]++;
    }

    for(auto x: map){
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    vector<int> arr = {10, 5, 10, 15, 10, 5};

  elemOccurFreq(arr);
    return 0;
}