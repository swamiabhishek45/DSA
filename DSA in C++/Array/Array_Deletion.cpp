#include <iostream>
using namespace std;

void arrayDeletion(int arr[], int n, int pos)
{
    for (int i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10];
    int n, pos;

    cout << "Enter size of array" << endl;
    cin >> n;

    cout << "Enter aray element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position where you want to delete" << endl;
    cin >> pos;

    arrayDeletion(arr, n, pos);
    return 0;
}