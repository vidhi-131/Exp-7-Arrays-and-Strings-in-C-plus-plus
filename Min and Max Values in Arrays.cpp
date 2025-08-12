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

    int max = num[0];
    for(int j = 1; j < x; j++) {
        if(max < num[j]) {
            max = num[j];
        }
    }
    cout << "The maximum value in the array is: " << max << endl;

    int min = num[0];
    for(int k = 1; k < x; k++) {
        if(min > num[k]) {
            min = num[k];
        }
    }
    cout << "The minimum value in the array is: " << min << endl;
}

/*
Output:
Enter the size of array: 5
Enter any 5 integer values: 12 34 7 23 90
The maximum value in the array is: 90
The minimum value in the array is: 7
*/
