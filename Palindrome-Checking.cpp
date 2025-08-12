// Vidhi Ratan
// 24070123131
// B2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, reversedStr = "";
    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }

    if (str == reversedStr)
    {
        cout << "The string is a palindrome!" << endl;
    }
    else
    {
        cout << "The string is not a palindrome!" << endl;
    }

    return 0;
}

/*
Output:
Enter a string: Mirror
The string is not a palindrome!
Enter a string: madam
The string is a palindrome!
*/
