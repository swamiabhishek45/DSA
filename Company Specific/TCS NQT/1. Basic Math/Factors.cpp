#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;
    for(int i= 1; i<=n; i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
    return 0;
}