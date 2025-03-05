#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;

    int sum = 0;

    for(char ch: str){
        if(isdigit(ch)){
            sum += ch - '0';
        }
    }

    cout << "Sum: " << sum;
    return 0;
}