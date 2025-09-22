#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool isPalindrome = true;
    int start = 0, end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            isPalindrome = false;
            break;
        }
        else{
            start++;
            end--;
        }
    }
    if (isPalindrome)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is not Palindrome";
    }
    return 0;
}