#include <bits/stdc++.h>
using namespace std;

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    inputArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}