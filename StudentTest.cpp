//
// Created by Will Smith on 11/9/17.
//

#include <iostream>
#include "StudentData.h"
#include "PersonData.h"

int main() {
    StudentData courseStudent("Smith",20,9999);
    PersonData aPerson(17, "Jones");

    /* Your solution goes here  */
   /* courseStudent.SetName("Smith");
    courseStudent.SetAge(20);
    courseStudent.SetID(9999); */

    courseStudent.PrintAll();
    // cout<<", ID: "<<courseStudent.GetID()<<endl;
    cout<<endl;
    aPerson.PrintAll();



    return 0;
}