#include <bits/stdc++.h>
using namespace std;

int min_step_to_equal(int P, int Q, int R)
{
    int arr[3] = {P, Q, R}; // {3, 3, 7}

    sort(arr, arr + 3);

    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        return 0;
    }

    int steps = 0;
    while (true)
    {
        arr[0] += 1; // 4
        arr[1] += 1; // 4
        arr[2] -= 1; // 6
        steps++; // 1, 
        sort(arr, arr + 3);

        if (arr[0] == arr[1] && arr[1] == arr[2])
        {
            return steps;
        }

        if ((arr[0] == arr[1] && arr[1] + 1 == arr[2]) || (arr[1] == arr[2] && arr[0] + 1 == arr[1]))
        {
            return -1;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int P, Q, R;
        cin >> P >> Q >> R;
        cout << min_step_to_equal(P, Q, R);
    }

    return 0;
}