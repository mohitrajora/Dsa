#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= 5; i++)
    {
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = 1; k <= i * 2 - 2; k++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = 1; k <= i * 2 - 2; k++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}