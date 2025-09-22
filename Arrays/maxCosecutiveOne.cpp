#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    int maxCount = 0; 

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        else
        {
            count = 0;
        }
    }

    cout << "Maximum consecutive 1's = " << maxCount << endl;
    return 0;
}