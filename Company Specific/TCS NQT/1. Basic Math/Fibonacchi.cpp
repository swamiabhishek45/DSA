#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;

    int a = 0, b = 1;
    for(int i = 1; i<= n; i++){
        int nextsum = a+b;
        cout << nextsum << " ";

        a = b;
        b = nextsum;
    }
    return 0;
}