// Vidhi Ratan
// 24070123131
// B2

#include<iostream>
using namespace std;

int main() {
    int x, sum = 0, avg;
    cout << "Enter the size of array: ";
    cin >> x;

    int num[x];
    cout << "Enter any " << x << " integer values: ";
    for(int i = 0; i < x; i++) {
        cin >> num[i];
    }

    for(int j = 0; j < x; j++) {
        sum += num[j];
    }

    cout << "The sum of elements is: " << sum;
    avg = sum / x;
    cout << "\nThe average of elements is: " << avg;
}

/*
Output:
Enter the size of array: 3
Enter any 3 integer values: 20
30
40
The sum of elements is: 90
The average of elements is: 30
*/
