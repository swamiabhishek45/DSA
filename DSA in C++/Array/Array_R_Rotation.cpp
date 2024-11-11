#include <iostream>
using namespace std;

void arrayRightRotation(int arr[], int n, int r)
{

    for (int i = 0; i < r; i++)
    {
        int temp = arr[n-1];
        for (int j = n-1; j <= 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
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

    arrayRightRotation(arr, n, r);

    return 0;
}

    