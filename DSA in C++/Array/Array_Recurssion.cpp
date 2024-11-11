#include <iostream>
using namespace std;

void myArray(int arr[],int n)
{
    void hello(void);
    if (n != 0)
    {
        n--;
        cout << "Inside Method " << n << endl;
        myArray(arr,n);
        cout << "***************" << endl;
        myArray(arr,n);
        hello();
    }
}

void hello()
{
    cout << "Hello" << endl;
}

int main()
{
    int n = 5;
    int arr[n]={30,50,40,20,10};
    myArray(arr,n);
    cout << "Inside Main Method " << n << endl;

    return 0;
}