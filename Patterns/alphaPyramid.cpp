#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 65;
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // symbol
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << ch;
            if (k<i)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        for (int j = 1; j <= n - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}