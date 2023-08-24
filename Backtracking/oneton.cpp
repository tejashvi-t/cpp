#include <bits/stdc++.h>
using namespace std;

// Print from 1 to n
// condition is cant use (i+1 , n ) method
// so here is a concept which we use that is backtracking .

void print(int i, int n)
{

    cout << "values are " << i << n << endl;

    if (i < 1)
    {
        return;
    }
    print(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    print(n, n);
}