//
// Created by Will Smith on 11/9/17.
//

#include "PersonData.h"
#include <iostream>
using namespace std;


void PersonData::SetAge(int ageYears) {
    PersonData::ageYears = ageYears;
}

void PersonData::SetName(const string &lastName) {
    PersonData::lastName = lastName;
}

void PersonData::PrintAll(){
    cout << "Name: " << lastName;
    cout << ", Age: "  << ageYears;
}

PersonData::PersonData() {
    cout<<"PersonData default constructor called!"<<endl;
}

PersonData::PersonData(int ageYears, const string &lastName) : ageYears(ageYears), lastName(lastName) {
    cout<<"PersonData parameterized constructor called"<<endl;
}

int PersonData::GetAge() const {
    return ageYears;
}

const string &PersonData::GetName() const {
    return lastName;
}
