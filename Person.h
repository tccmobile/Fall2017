//
// Created by Will Smith on 10/10/17.
//

#ifndef FALL2017_PERSON_H
#define FALL2017_PERSON_H

#include <string>
using namespace std;


class Person {

private:
    string name;
    int age;

public:
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    Person();

    Person(const string &name, int age);

};


#endif //FALL2017_PERSON_H
