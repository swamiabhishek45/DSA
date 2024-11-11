#include<iostream>
using namespace std;

int main()
{
    int *ptr,n;

    cout << "Enter array size" << endl;
    cin >> n;

    ptr=new int [n];

   
    for(int i=0; i<n;i++)
    {
        cin>>ptr[i];  //  *(ptr + i)
    }

    for(int i=0; i<n;i++)
    {
        cout<<ptr[i]<<" ";  //  *(ptr + i)
    }

    delete[] ptr;
    ptr=NULL;
    return 0;
}