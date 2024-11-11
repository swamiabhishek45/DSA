#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];                              // Best Case --> nlog(n)
            arr[j] = temp;                               // Worst Case --> n^2
        }
    }
    return i;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);
        quickSort(arr,0, p-1);
        quickSort(arr, p+1,end);
    }
}

int main()
{
    int arr[] = {50, 20, 90, 70, 40, 60, 10, 100, 30, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    quickSort(arr, start, end);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}