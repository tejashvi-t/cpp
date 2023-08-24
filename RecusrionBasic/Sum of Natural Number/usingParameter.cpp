#include <bits/stdc++.h>
using namespace std;

int sumNatural(int n, int sum)
{
    if (n < 1)
        return sum;

    sumNatural(n - 1, sum + n);
}

int main()
{
    int n;
    cin >> n;
    int ans = sumNatural(n, 0);
    cout << ans;
}