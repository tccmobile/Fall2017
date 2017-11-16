//
// Created by Will Smith on 11/9/17.
//

#ifndef FALL2017_PERSONDATA_H
#define FALL2017_PERSONDATA_H


#include <string>
using namespace std;

class PersonData {
protected:
    int    ageYears;
    string lastName;
public:
    void SetAge(int ageYears);

    void SetName(const string &lastName);

    int GetAge() const;

    const string &GetName() const;

    void PrintAll();

    PersonData();

    PersonData(int ageYears, const string &lastName);
};


#endif //FALL2017_PERSONDATA_H
