#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev = 0;
    cin >> n;
    int checkAns = n;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    if (rev == checkAns)
    {
        cout << "Number is Palidrom";
    }
    else
    {
        cout << "Nothing...";
    }
    return 0;
}