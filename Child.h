//
// Created by Will Smith on 10/26/17.
//

#ifndef FALL2017_CHILD_H
#define FALL2017_CHILD_H

#include <string>
using namespace std;

class Child {
private:
    string name;
    int age;
    bool happy;
public:
    Child();

    Child(const string &name, int age, bool happy);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    bool isHappy() const;

    void setHappy(bool happy);

    void plays();

};


#endif //FALL2017_CHILD_H
