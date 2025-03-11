#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    // Using HashSet
    // set<int> s; // set only stores unique elements
    // for(int i = 0; i<n; i++){
    //     s.insert(arr[i]);
    // }
    // int k = s.size();
    // int j = 0;
    // for(int x: s){
    //     arr[j++] = x;
    // }
    // return k;

    // Using Two Pointers
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main()
{

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}