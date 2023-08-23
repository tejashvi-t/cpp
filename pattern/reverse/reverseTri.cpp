#include <iostream>
using namespace std;

void printTri(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "x";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printTri(n);
}