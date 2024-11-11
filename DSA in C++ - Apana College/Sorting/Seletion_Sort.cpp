#include <iostream>
using namespace std;
void seletionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }     // Best & Worst case = O(n^2)
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3,2,5,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    seletionSort(arr, n);

    return 0;
}