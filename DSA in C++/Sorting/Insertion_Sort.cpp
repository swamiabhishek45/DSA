#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) // Best case = O(n)
{                                    // Worst case = O(n^2)
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int temp = arr[i];

        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, -6, -4, 3, 18 / 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    return 0;
}