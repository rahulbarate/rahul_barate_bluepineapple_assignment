#include <iostream>
#include <string>
using namespace std;
void isPalindrome(string str);
int main()
{
    string str;
    cout << "\nEnter string : ";
    cin >> str;
    isPalindrome(str);

    return 0;
}
void isPalindrome(string str)
{
    int i = 0;
    int j = str.length() - 1;
    while (j > i)
    {
        if (str[i++] != str[j--])
        {
            cout << str << " Is not palindrome";
            return;
        }
    }
    cout << str << " Is palindrome";
}