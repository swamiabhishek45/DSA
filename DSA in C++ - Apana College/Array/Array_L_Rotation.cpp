#include <iostream>
using namespace std;

void arrayLeftRotation(int arr[], int n, int r)
{

    for (int i = 0; i < r; i++)
    {
        int temp = arr[0];
        for (int j = 0; j <= n-1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, r;
    int arr[10];

    cout << "Enter array size" << endl;
    cin >> n;

    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of rotations" << endl;
    cin >> r;

    arrayLeftRotation(arr, n, r);

    return 0;
}