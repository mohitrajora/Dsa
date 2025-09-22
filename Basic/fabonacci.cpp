#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cin >> n;
    if (n == 0)
    {
        cout << a;
    }
    else if (n == 1)
    {
        cout << b;
    }
    else
    {
        cout << a << " " << b;
        for (int i = 2; i < n; i++)
        {
            int nextValue = a + b;
            a = b;
            b = nextValue;
            cout << " " << nextValue;
        }
    }
    return 0;
}