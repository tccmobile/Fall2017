//
// Created by Will Smith on 10/10/17.
//

#include "Person.h"

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}

Person::Person() {
    name = "John Doe";
    age = 42;
}

Person::Person(const string &name, int age)  {
    this->name = name;
    this->age = age;
}
