#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= size)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 5, 7, 34, 65, 75, 88, 100, 147, 200, 400}; // Binary search always need in Sorted Array
    int size = sizeof(arr) / sizeof(int);
    int element = 34;
    
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at Index %d \n", element, searchIndex);
    return 0;
}