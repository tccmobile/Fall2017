//
// Created by Will Smith on 10/26/17.
//

#include "Child.h"

Child::Child() {
    name = "Bob";
    age = 8;
    happy = false;
}

Child::Child(const string &name, int age, bool happy) : name(name), age(age), happy(happy) {}

const string &Child::getName() const {
    return name;
}

void Child::setName(const string &name) {
    Child::name = name;
}

int Child::getAge() const {
    return age;
}

void Child::setAge(int age) {
    Child::age = age;
}

bool Child::isHappy() const {
    return happy;
}

void Child::setHappy(bool happy) {
    Child::happy = happy;
}

void Child::plays() {
    if (isHappy()){
        happy=false;
    } else {
        happy=true;
    }
}
