#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2, r = 2, n = 4;
    int sum = 0;

    for(int i = 1; i<= n; i++){
        sum += a;
        a *= r;
    }

    cout << sum;
    return 0;
}