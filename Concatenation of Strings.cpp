#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, result;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    result = str1 + " " + str2; // Concatenate using + operator
    cout << "Concatenated String: " << result << endl;

    return 0;
}

/*
Output:
Enter first string: Symbiosis
Enter second string: University
Concatenated String: Symbiosis University
*/
