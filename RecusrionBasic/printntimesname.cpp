#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << "Name" << endl;
    printName(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    int i = 1;
    printName(i, n);
}
