//
// Created by Will Smith on 9/26/17.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){

  //TODO: Enter your code

    vector<int> intVector;


    cout<<"Size of intVector initially: "<<intVector.size()<<endl;

    intVector.push_back(5);

    cout<<"Size of intVector after push_back: "<<intVector.size()<<endl;

    intVector.push_back(42);

    cout<<"Size of intVector after push_back: "<<intVector.size()<<endl;

    intVector.pop_back();

    cout<<"Size of intVector after pop_back: "<<intVector.size()<<endl;






    return 0;
}