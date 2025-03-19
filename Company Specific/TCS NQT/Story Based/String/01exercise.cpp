#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> exercise;
    string s;

    for(int i = 0; i<7; i++){
        getline(cin, s);
        exercise.push_back(s);
    }
    int totalTime = 0;

    for(const string& day: exercise){
        int n = day.length();
        string num = "";

        for(int i = n-1; i>=0; i--){
            if(day[i] == ' ' || day[i] == ':'){
                break;
            }
            num = day[i] + num;
        }

        totalTime += stoi(num);
    }

    cout << "Average: " << (totalTime / 7.0) << endl;
    cout << "Sum: " << totalTime << endl;
    return 0;
}