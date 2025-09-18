#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int i, j;

    for (i = 0; i < 2 * n - 1; i++)
    {

        for (j = 0; j < 2 * n - 1; j++)
        {
            int top = i, left = j, right = 2 * n - 2 - j, down = 2 * n - 2 - i;
            int ans = min(min(top, left), min(down, right));
            cout << n-ans<<" ";
        }
        cout << endl;
    }
    return 0;
}