#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,1,2,3,4,5,1,3};

    unordered_map<int, int> m;

    for(auto i: arr){
        ++m[i];
    }

    for(auto i: m){
        if(i.second > 1)
            cout << i.first << " ";
    }
    return 0;
}