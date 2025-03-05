#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int mini = INT_MAX, maxi = INT_MIN;

    while(n != 0){
        int d = n % 10;

        mini = min(mini, d);
        maxi = max(maxi, d);

        n /= 10;
    }

    cout << "Largest Digit: " << maxi << endl;
    cout << "Smallest Digit: " << mini << endl;
    return 0;
}