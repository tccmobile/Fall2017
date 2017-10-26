//
// Created by SE420701 on 10/20/16.
//

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H


#include "ItemToPurchase.h"
#include <vector>
using namespace std;

class ShoppingCart {

private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartitems;
public:
    ShoppingCart();

    ShoppingCart(const string &customerName, const string &currentDate);

    const string &GetCustomerName() const;

    const string &GetDate() const;

    void AddItem(ItemToPurchase);

    void RemoveItem(string);

    void ModifyItem(ItemToPurchase);

    int GetNumItemsInCart();

    int GetCostOfCart();

    void PrintTotal();

    void PrintDescriptions();
};


#endif //SHOPPINGCART_H
