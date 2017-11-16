//
// Created by Will Smith on 11/7/17.
//

#include <iostream>
using namespace std;

int main() {
    int num1 = -1; // Initial value -1 for demo purposes.
    int num2 = -1;

    cout << "Enter a number: " << endl;
    cin  >> num1; // Stream error state entered here.

    cout << "Enter a second number:" << endl;
    cin  >> num2; // Stream already in error state, so extraction skipped.

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}