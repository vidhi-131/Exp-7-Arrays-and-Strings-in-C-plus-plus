// Vidhi Ratan
// 24070123131
// B2


#include<iostream>
using namespace std;

int main(){
    int num[10] = {30, 40, 50, 60};  // Only 4 elements initialized
    int key;
    cout << "Enter the value to search in the array: ";
    cin >> key;

    bool found = false;  // Flag to track if key is found

    for(int j = 0; j < 5; j++) {
        if(key == num[j]) {
            cout << "Key found at Location: " << j;
            found = true;
            break;  // Exit loop once key is found
        }
    }

    // Optional: handle case when key is not found
    /*
    if (!found) {
        cout << "Key not found in the array.";
    }
    */
}

/*
Output:
Enter the value to search in the array: 30
Key found at Location: 0
*/
