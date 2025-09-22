#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int original = n;
    while (n > 0)
    {
        int digit = n % 10;
        ans += digit * digit * digit;
        n = n / 10;
    }
    if (ans == original)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Nope Buddy!!";
    }
    return 0;
}