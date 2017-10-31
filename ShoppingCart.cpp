//
// Created by SE420701 on 10/20/16.
//

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    ShoppingCart::customerName = "none";
    ShoppingCart::currentDate = "January 1, 2016";

}

ShoppingCart::ShoppingCart(const string &customerName, const string &currentDate) : customerName(customerName),
                                                                                    currentDate(currentDate) {}

const string &ShoppingCart::GetCustomerName() const {
    return customerName;
}

const string &ShoppingCart::GetDate() const {
    return currentDate;
}

int ShoppingCart::GetCostOfCart() {
    return 0;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    cartitems.push_back(item);
}

void ShoppingCart::RemoveItem(string name) {
    if (cartitems.at(i).GetName()==name)

}

void ShoppingCart::ModifyItem(ItemToPurchase) {

}

int ShoppingCart::GetNumItemsInCart() {

    int total = 0;

       total+=cartitems.at(i).GetQuantity();
    return total;
}

void ShoppingCart::PrintTotal() {

}

void ShoppingCart::PrintDescriptions() {

}
