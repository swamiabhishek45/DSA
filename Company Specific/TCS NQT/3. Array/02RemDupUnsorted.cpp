// #include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

int removeDuplicatedUnsorted(vector<int> &arr)
{
    // Using Sort 
    sort(arr.begin(), arr.end());
    int i = 0;
    for(int j = 1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
    
}

int main()
{

    vector<int> arr = {4, 3, 1, 5, 6, 2};

    int k = removeDuplicatedUnsorted(arr);
    for(int i = 0; i<k; i++){
        cout << arr[i] << " ";
    }

    // Using HashSet
    // vector<int> result;
    // unordered_set<int> seen;
    // for (int i : arr)
    // {
    //     if (seen.insert(i).second)
    //     {
    //         result.push_back(i);
    //     }
    // }
    // for (int i : result)
    // {
    //     cout << i << " ";
    // }
    return 0;
}