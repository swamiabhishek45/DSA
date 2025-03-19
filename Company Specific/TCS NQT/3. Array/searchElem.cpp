#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int k = 3;

    for(int i = 0; i<n; i++){
        if(arr[i] == k){
            cout << i;
        }
    }
    return 0;
}