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

    ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice,
                       int itemQuantity);

private:
    string itemName;
    int itemPrice;
    int itemQuantity;
    string itemDescription;
public:
    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    const string &GetDescription() const;

    void GetDescription(const string &itemDescription);

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);

    void PrintItemCost();

    void PrintItemDescription();



};


#endif //ITEMTOPURCHASE_H
