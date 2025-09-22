// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, factorial = 1;
//     cin >> n;

//     if (n == 0 || n == 1)
//     {
//         cout << factorial;
//     }
//     else
//     {
//         for (int i = n; i >= 1; i--)
//         {
//             factorial *= i;
//         }
//         cout << factorial;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1) 
        return 1;
    return n * factorial(n - 1); 
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
