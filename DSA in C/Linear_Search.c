#include<stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,3,4,3,6,45,756,34,73,599};
    int size = sizeof(arr)/sizeof(int);
    int element = 34;
    int searchIndex = linearSearch(arr,size,element);
    printf("The element %d was found at Index %d ",element,searchIndex);
}