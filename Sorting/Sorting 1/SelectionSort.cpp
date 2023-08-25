#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        int mini = i;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

        cout << temp << arr[mini] << arr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of arr ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element";
        cin >> arr[i];
    }

    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i];
    }
}