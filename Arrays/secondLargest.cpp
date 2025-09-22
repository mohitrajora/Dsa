#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = 0;
    int s_largest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] >= s_largest && arr[i] < largest)
        {
            s_largest = arr[i];
        }
    }
    cout << s_largest;
    return 0;
}