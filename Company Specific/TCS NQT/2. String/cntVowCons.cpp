#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);

    string vowelSet = "aeiouAEIOU";
    
    int v = 0, c = 0;

    for (char ch : str)
    {
        if(isalpha(ch)){
            if(vowelSet.find(ch) != string::npos){
                v++;
            }else{
                c++;
            }
        }
    }

    cout << v << " " << c;
    return 0;
}