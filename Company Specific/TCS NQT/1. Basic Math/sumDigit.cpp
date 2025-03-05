#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: " ;
    cin >> n;

    int sum = 0;

    while(n != 0){
        int d = n % 10;

        sum += d;

        n /= 10;
    }

    cout << "Sum: " << sum;
    return 0;
}