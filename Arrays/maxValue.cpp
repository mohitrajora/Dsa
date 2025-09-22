#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // length or array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}