//
// Created by Will Smith on 11/16/17.
//

#include <iostream>
#include <string>
using namespace std;


class Fruit {
public:
    virtual void display(){

        cout<<"\nFruit display"<<endl;
    }

    virtual void info(){
        cout<<"\nI am a fruit!"<<endl;

    }

    virtual void show(){

    }
};

class mango: public Fruit {

public:
    virtual void display(){
        cout<<"\nMango display"<<endl;
    }

    virtual void info(){
        cout<<"\nI am a yummy mango!"<<endl;
    }

    void show(){
        cout<<"\nYup I'm a mango and proud of it!"<<endl;
    }
};


int main(){

    Fruit *FruitPtr;
    Fruit fruit;
    mango myMango;


    FruitPtr = &fruit;

    FruitPtr->display();
    FruitPtr->info();

    FruitPtr = &myMango;

    FruitPtr->display();
    FruitPtr->info();

    FruitPtr->show();

  return 0;
}