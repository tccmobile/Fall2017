//
// Created by Will Smith on 9/28/17.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 5;        // Number of elements
    vector<double> revVctr(NUM_ELEMENTS); // User values
    double total = 0.0;
    double max = 0.0;


    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        cout << "Enter weight "<<i+1<<":"<<endl;
        cin >> revVctr.at(i);
        total += revVctr.at(i);
        if (revVctr.at(i)>max){
            max = revVctr.at(i);
        }
    }



    // Print values
    cout << "You entered:";
    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr.at(i);
    }
    cout << endl<<endl;
    cout<<"Total weight: "<<total<<endl;
    cout<<"Average weight: "<<total/NUM_ELEMENTS<<endl;
    cout<<"Max weight: "<<max<<endl;

    return 0;
}