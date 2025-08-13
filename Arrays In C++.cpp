// Vidhi Ratan
// 24070123131
// B2


#include<iostream>
using namespace std;

int main(){
    int num[10];
    cout <<"Enter any 5 integer values: ";
    for(int i = 0; i < 5; i++){
        cin >> num[i];
    }
    for(int j = 0; j < 5; j++){
        cout << num[j] << " ";
    }
}

/*
Output:
Enter any 5 integer values: 50
60
70
80
90

50 60 70 80 90
*/
