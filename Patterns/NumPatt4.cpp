#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // spaces
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }

        // numbers
        for (int l = i; l >=1; l--)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}