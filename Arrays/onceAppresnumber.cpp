#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
                cnt++;
        }

        if (cnt == 1)
        {
            cout << "The single element is: " << num << endl;
            return 0;
        }
    }

    return 0;
}