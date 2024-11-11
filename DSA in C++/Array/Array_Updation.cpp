#include <iostream>
using namespace std;

void arrayUpdation(int arr[], int n, int item, int pos)

{
    for (int i = 0; i < n; i++)
    {
        if (i == pos - 1)
        {
            arr[i] = item;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, item, pos;

    cout << "Enter array size" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element you want to insert" << endl;
    cin >> item;

    cout << "Enter position you want to update" << endl;
    cin >> pos;

    arrayUpdation(arr, n, item, pos);

    //arr[pos-1]=item;

    //  for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
} 

