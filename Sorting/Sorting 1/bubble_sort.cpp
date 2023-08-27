#include <bits/stdc++.h>
using namespace std;

// bubble sort

void bubble_sort(vector<int> &vec)
{
    int n = vec.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    bubble_sort(vec);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i];
    }
}
