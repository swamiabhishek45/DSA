#include <iostream>
#include <unordered_map>
using namespace std;

int calculateInefficiency(int n, int arr[], int k)
{
    unordered_map<int, int> salaryCount;

    // Count occurrences of each salary
    for (int i = 0; i < n; i++)
    {
        salaryCount[arr[i]]++;
    }

    int tables = salaryCount.size(); // Unique salaries = tables needed
    int conflicts = n - tables;      // Extra people with same salaries

    return (tables * k) + conflicts;
}

int main()
{
    int n, k;
    cin >> n; // Read number of colleagues

    int arr[n]; // Declare salary array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Read salaries
    }

    cin >> k; // Read cost of each table

    cout << calculateInefficiency(n, arr, k) << endl;
    return 0;
}
