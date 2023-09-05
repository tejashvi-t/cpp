#include <bits/stdc++.h>
using namespace std;

int find_largest(int arr[], int n)
{

    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = find_largest(arr, n);
    cout << "LARGEST NUMBER IN ARRAY IS  " << largest;
}