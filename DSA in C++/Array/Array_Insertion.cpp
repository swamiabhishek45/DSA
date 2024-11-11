#include <iostream>
using namespace std;

void arrayInsertion(int arr[], int n, int item, int pos)
{
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    n++;
    arr[pos - 1] = item;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10];
    int n, item, pos;

    cout << "Enter the size of array" << endl;
    cin >> n;

    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position where you want to insert" << endl;
    cin >> pos;

    cout << "Enter new element" << endl;
    cin >> item;
    arrayInsertion(arr, n, item, pos);

    return 0;
}