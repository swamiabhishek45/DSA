#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello world!";
    string s2 = "Marvel Superheroes";

    cout << s.length() << endl;
    cout << s.size() << endl;
    cout << s.substr(2, 3) << endl; // (pos, len)
    cout << s.find("rld") << endl; // index
    cout << s.append(" I am back") << endl;
    cout << s.compare(s2); // true/false
    return 0;
}