
#include <bits/stdc++.h>
using namespace std;

//! method 1
int count_digits(int n)
{
    int x = n;
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    cout << count;
}

// !method 2 using string function
// we can convert whole number into string and retunr the string legth ;
int count_digit2(int n)
{
    string x = to_string(n);
    int count = x.length();
    cout << count;
}

//! method 3
int count_digit3(int n)
{
    int ans = log10(n) + 1;
    cout << ans;
}

int main()
{
    int n;
    cin >> n;

    count_digit3(n);
    // count_digits(n);

    // cout << "Number of digits in " << n << " is " << count_digits(n/);
    // return 0;
}
