//
// Created by Will Smith on 10/10/17.
//

#include "Person.h"
#include <iostream>
using namespace std;

int main(){

  //TODO: Enter your code

    Person one;

    cout<<"Name: "<<one.getName()<<endl;
    cout<<"Age: "<<one.getAge()<<endl;
    one.setAge(17);
    one.setName("Jane Doe");
    cout<<"New Name: "<<one.getName()<<endl;
    cout<<"New Age: "<<one.getAge()<<endl;

    // one.age = 25; attribute is private

    Person two("Tom Thumb",75);
    cout<<"Two's Name: "<<two.getName()<<endl;
    cout<<"Two's Age: "<<two.getAge()<<endl;


  return 0;
}