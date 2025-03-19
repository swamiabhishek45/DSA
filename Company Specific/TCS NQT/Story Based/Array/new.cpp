#include<bits/stdc++.h>
using namespace std;

int rangeSum(int i, int j){
    return (j*(j+1)/2) - (i*(i-1)/2);

}

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for(int t = 0; t<T; ++t){
        string userinput;
        getline(cin, userinput);
        stringstream ss(userinput);

        int i, j;
        if(!(ss >> i >> j)){
            cout << "invalid input i&j i<=j<10000";
            continue;
        }

        if(i >= j || i < 0 || j >= 10000){
            cout << "invalid input i&j i<=j<10000";
        }else{
            cout << rangeSum(i, j) << " ";
        }
    }
    
    return 0;
}