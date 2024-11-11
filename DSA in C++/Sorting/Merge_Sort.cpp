#include <iostream>
using namespace std;

void finalMerge(int arr[], int start, int mid, int end)
{
    int i, j, k;      // Global Variables
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int leftArr[n1];                // B & w -> O(nlog(n))
    int rightArr[n2];

    for (int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[start + i];
       // cout << "Left Array : " << leftArr[i] << endl;
    }

    for (int j = 0; j < n2; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
       // cout << "Right Array : " << rightArr[j] << endl;
    }
    i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
          //  cout << "Final Array : " << arr[i] << endl;
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
          //  cout << "Final Array : " << arr[i] << endl;
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = leftArr[i];
      //  cout << "Final Array : " << arr[i] << endl;
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = rightArr[j];
       // cout << "Final Array : " << arr[i] << endl;
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    // void finalMerge(int[], int, int, int);
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        // cout << "start : " << start << endl;
        // cout << "mid   : " << mid << endl;
        // cout << "end   : " << end << endl
        //      << endl;
        finalMerge(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {50, 20, 90, 70, 100, 80, 60, 10, 40, 30};
    // void mergeSort(int[], int, int);
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    mergeSort(arr, start, end);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
