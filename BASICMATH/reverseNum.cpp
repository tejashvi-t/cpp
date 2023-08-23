#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n)
{
    int revNum = 0;
    int digit = n;
    while (digit != 0)
    {
        int lastdigit = digit % 10;
        digit = digit / 10;
        revNum = revNum * 10 + lastdigit;
    }
    cout << revNum;
}

int main()
{
    int n;
    cin >> n;
    reverseNum(n);
}