#include <bits/stdc++.h>
using namespace std;

int priorElem(int arr[], int n){
    int maxi = INT_MIN;
    int cnt = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] > maxi){
            cnt++;
            maxi = arr[i];
        }
    }

    return cnt;
}

int main()
{
    int arr[] = {4, 5, 2, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << priorElem(arr, n);

    return 0;
}