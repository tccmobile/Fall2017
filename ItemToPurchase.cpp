//
// Created by SE420701 on 3/2/17.
//

#include <iostream>
#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {

    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
    itemDescription = "none";
}

ItemToPurchase::ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice,
                               int itemQuantity)
        : itemName(itemName), itemPrice(itemPrice), itemQuantity(itemQuantity), itemDescription(itemDescription) {}


const string &ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetName(const string &itemName) {
    ItemToPurchase::itemName = itemName;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetPrice(int itemPrice) {
    ItemToPurchase::itemPrice = itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}

const string &ItemToPurchase::GetDescription() const {

    return itemDescription;
}

void ItemToPurchase::GetDescription(const string &itemDescription) {
    ItemToPurchase::itemDescription = itemDescription;
}

void ItemToPurchase::PrintItemCost() {

    cout<<itemName<<" "<<itemQuantity<<" @ $"<<itemPrice<<" = $"<<(itemPrice * itemQuantity)<<endl;

}

void ItemToPurchase::PrintItemDescription() {
    cout<<itemName<<": "<<itemDescription<<endl;
}

