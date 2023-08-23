#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n)
{
    int original = n;
    int temp = n;
    int count = 0;

    while (temp != 0)
    {
        count++;
        temp = temp / 10;

        cout << "printing count " << count << endl;
    }

    int powersum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        cout << "  printing digit===" << digit << endl;
        powersum = powersum + pow(digit, count);
        cout << "printing powersum" << powersum << endl;
    }
    cout << "printing totAL sum " << powersum << endl;

    return (powersum == original);
}

int main()
{
    int n;
    n = 153;
    if (armstrong(n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}