#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int cnt = 0;
    for(int i = 1; i<=sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            if(n/i != i){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}