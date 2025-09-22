#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    int newLength = i + 1;

    cout << "Length of an arrray =" << newLength << endl;
    cout << "Array:";
    for (int k = 0; k < newLength; k++)
    {
        cout << arr[k] << " ";
    }
}