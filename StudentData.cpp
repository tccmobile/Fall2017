//
// Created by Will Smith on 11/9/17.
//

#include <iostream>
#include "StudentData.h"

int StudentData::GetID() const {
    return idNum;
}

void StudentData::SetID(int idNum) {
    StudentData::idNum = idNum;
}

StudentData::StudentData() {
    cout<<"Student Data constructor called"<<endl;
}

StudentData::StudentData(string name, int age, int idNum): PersonData(age,name)  {


    cout<<"Parameterized constructor called"<<endl;

    /*SetName(name);

    SetAge(age); */

    StudentData::idNum = idNum;
}

void StudentData::PrintAll() {
   /* cout<<lastName<<endl;
    cout<<ageYears<<endl; */

    PersonData::PrintAll();
    cout<<", ID: "<<idNum<<endl;


}
