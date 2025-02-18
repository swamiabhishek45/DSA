#include<bits/stdc++.h>
using namespace std;


void getMedian(int arr[], int n){
    sort(arr, arr+n);
    
    if(n%2==0){
        int ind1 = (n/2);
        int ind2 = (n/2) - 1;

        cout << (double)(arr[ind1]+arr[ind2])/2;
    }else{
        cout << arr[(n/2)];
    }
}

int main()
{
    int arr[] = {1,2,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    getMedian(arr, n);
    return 0;
}