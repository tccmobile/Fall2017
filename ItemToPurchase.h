//
// Created by SE420701 on 3/2/17.
//

#include <string>
using namespace std;



#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H


class ItemToPurchase {
public:
    ItemToPurchase();

private:
    string itemName;
    int itemPrice;
    int itemQuantity;
public:
    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);


};


#endif //ITEMTOPURCHASE_H
