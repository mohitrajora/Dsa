// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, ans;
//     cin >> n;
//     while (n > 0)
//     {
//         ans = n % 10;
//         cout << ans;
//         n=n/10;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    cout << rev;
    return 0;
}
