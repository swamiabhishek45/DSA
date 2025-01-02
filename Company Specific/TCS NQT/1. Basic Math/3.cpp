#include <bits/stdc++.h>
using namespace std;

int main()
{
    int duration, sum = 0;

    for (int i = 1; i <= 7; i++)
    {
        cout << "Day " << i << " exercise duration: ";
        cin >> duration;
        sum += duration;
    }

    double avg = static_cast<double>(sum) / 7;

    cout << "Total minutes: " << sum << endl;
    cout << "Average min per day: " << avg;
    return 0;
}