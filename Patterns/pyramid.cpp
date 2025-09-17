#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        // for spaces
        for (int l = 1; l <= n - i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}