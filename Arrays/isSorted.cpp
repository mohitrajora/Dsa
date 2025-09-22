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
    
    bool isSorted = true;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            isSorted=false;  
        }
    }
    if(isSorted){
        cout<<"Array sorted";
    }
    else{
        cout<<"Nhii he bc";
    }
    return 0;
}