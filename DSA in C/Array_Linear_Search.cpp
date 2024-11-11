#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int item)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == item)
        {
            cout << item << " found at index " << i;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "NO Element found" << endl;
    }
}

int main()
{
    int n, item;
    cout << "Enter Array size " << endl;
    cin >> n;

    int arr[n];
    cout << "Entr elememts " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element you want to search " << endl;
    cin >> item;

linearSearch(arr,n,item);
    return 0;
}