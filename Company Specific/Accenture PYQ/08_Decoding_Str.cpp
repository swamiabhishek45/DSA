#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "100110111";
    // cin>>s;

    string res = "";
    int count = 0;

    for(char c: s){
        if(c == '0' && count == 0){
            count = 0;
        }else if(c == '0' && count > 0){
            res += char('A' + count - 1);
            count = 0;
        } else{
            count++;
        }
    }

    if(s[s.length() - 1] == '1'){
        res += char('A' + count - 1);
    }

    cout << res << endl; // ABC
    return 0;
}