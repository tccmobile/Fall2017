//
// Created by Will Smith on 11/16/17.
//
#include <iostream>
#include <string>
using namespace std;


class Parent {

protected:
    string name;

public:
    Parent(const string &name) : name(name) {}

    Parent() { name = "Joe Smith";}

    virtual void display(){
        cout<<"My name is: "<<name<<endl;
    }

    virtual ~Parent() {
        cout<<"Parent destructing...\n";
    }
};

class Student: public Parent {
private:
    float gpa;

public:
    Student(const string &name, float gpa) : Parent(name), gpa(gpa) {}

    Student() { gpa = 3.0;}

    virtual void display(){
        cout<<"My name is: "<<name<<" and my gpa is: "<<gpa<<endl;
    }

    virtual ~Student(){
        cout<<"Student destructing...\n";
    }
};

int main(){

  //TODO: Enter your code

    Parent* parent;

    Parent myParent("Tom");
    Parent yourParent;
    Parent* anotherParent = new Parent();


    Student myStudent("Sue",4.0);
    Student yourStudent;
    Parent* anotherStudent = new Student();

    parent = &myParent;
    parent->display();

    parent = &myStudent;
    parent ->display();


    parent = anotherParent;
    parent ->display();

    parent = anotherStudent;
    parent ->display();

    delete parent;



  return 0;
}