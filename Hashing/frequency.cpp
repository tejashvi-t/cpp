#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int arr[n];

    // stores the main array
    for (int i = 0; i < n; i++)
    {
        cout << "please enter the array element";
        cin >> arr[i];
    }

    int freq[13] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]] += 1;
    }

    int q;
    cout << "enter the number of text cases  " << endl;

    cin >> q;
    while (q--)
    {
        int number;
        cout << "enter the main numbrs to check" << endl;
        cin >> number;
        cout << "aprreance of numbers  " << number << "is " << freq[number] << endl;
    }
}
