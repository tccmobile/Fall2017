//
// Created by Will Smith on 11/16/17.
//

#include <iostream>
using namespace std;


class A{

public:
    virtual void show(){
        cout<<"Base class"<<endl;
    }
};

class B: public A{

private:
    virtual void show(){
        cout<<"Derived class"<<endl;
    }
};

int  main(){


    A *a;
    B b;

    a = &b;

    a->show(); //retains protection of original entry

   // b.show(); still "private via direct access

  return 0;
}