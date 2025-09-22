#include <iostream>
using namespace std;

int main()
{
    int a[] = {100, 200, 1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    int longest = 1; // store longest consecutive sequence

    // Loop over each element
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int cnt = 1;

        // Check for consecutive numbers
        while (true)
        {
            bool found = false;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == x + 1)
                {
                    found = true;
                    x = a[j];
                    cnt++;
                    break;
                }
            }
            if (!found)
                break; // no more consecutive numbers
        }

        // Update longest without using max()
        if (cnt > longest)
            longest = cnt;
    }

    cout << "The longest consecutive sequence is " << longest << "\n";

    return 0;
}
