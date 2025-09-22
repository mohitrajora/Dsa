#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {2, 6, 5, 8, 11};
    int target = 14;

    string ans = "NO";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans = "YES";
                break;
            }
        }
        if (ans == "YES")
            break; // stop outer loop too
    }

    cout << "This is the answer for variant 1: " << ans << endl;

    return 0;
}
