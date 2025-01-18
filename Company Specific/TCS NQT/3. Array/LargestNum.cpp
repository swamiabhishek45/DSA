#include <bits/stdc++.h>
using namespace std;

int largestNum(vector<int> &arr)
{
    // 1. Sorting
    // sort(arr.begin(), arr.end());
    // return arr[arr.size() - 1];

    // 2. Using max var
    int max = arr[0];

    for(int i = 0; i<= arr.size() - 1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    vector<int> arr = {2, 5, 1, 3, 0};

    cout << largestNum(arr);
    return 0;
}