#include <iostream>
using namespace std;

void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "x ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printStar(n);
}