#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        if (!isalnum(s[start]))
            start++;
        else if (!isalnum(s[end]))
            end--;
        else
        {
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter a string to check for palindrome: ";
    getline(cin, s);

    if (isPalindrome(s))
        cout <<"Palindrome\n";
    else
        cout <<"Not Palindrome\n";
}