//
// Created by Will Smith on 11/9/17.
//

#ifndef FALL2017_STUDENTDATA_H
#define FALL2017_STUDENTDATA_H


#include "PersonData.h"

class StudentData: public PersonData {
private:
    int idNum;
public:

    int GetID() const;

    void SetID(int idNum);

    StudentData();

    StudentData(string name, int age, int idNum);

    void PrintAll();
};


#endif //FALL2017_STUDENTDATA_H
