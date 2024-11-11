#include<iostream>
using namespace std;

void arrayTraversal(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10];
    int n;

    cout << "Enter the size of array" << endl;
    cin >> n;

    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arrayTraversal(arr,n);
    return 0;
}