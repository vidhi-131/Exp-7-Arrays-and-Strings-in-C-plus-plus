// Vidhi Ratan
// 24070123131
// B2

#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the size of array: ";
    cin >> x;

    int num[x];
    cout << "Enter any " << x << " integer values: ";
    for(int i = 0; i < x; i++) {
        cin >> num[i];
    }

    cout << "Reversed Array is: ";
    for(int j = x - 1; j >= 0; j--) {
        cout << num[j] << " ";
    }
}

/*
Output:
Enter the size of array: 5
Enter any 5 integer values: 30
40
50
60
70
Reversed Array is: 70 60 50 40 30
*/
