//
// Created by Will Smith on 11/16/17.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class GenericItem{
protected:
    string itemName;
    int itemQuantity;

public:

    void setItemName(const string &itemName) {
        GenericItem::itemName = itemName;
    }

    void setItemQuantity(int itemQuantity) {
        GenericItem::itemQuantity = itemQuantity;
    }

    virtual void PrintItem(){
        cout<<itemName<<" "<<itemQuantity<<endl;
    }
};


class ProduceItem: public GenericItem {
protected:
    string expirationDate;
public:
    void setExpirationDate(const string &expirationDate) {
        ProduceItem::expirationDate = expirationDate;
    }

    const string &getExpirationDate() const {
        return expirationDate;
    }

     virtual void PrintItem(){
        cout<<itemName<<" "<<itemQuantity<<" (Expires: "<<expirationDate<<")"<<endl;
    }
};

int main(){

    GenericItem* genericItemPtr = nullptr;
    GenericItem* produceItemPtr = nullptr;

    vector<GenericItem *> inventoryList;

    GenericItem genericItem;
    genericItem.setItemName("Smith Cereal");
    genericItem.setItemQuantity(9);

    genericItemPtr = &genericItem;

    ProduceItem produceItem;
    produceItem.setItemName("Apple");
    produceItem.setItemQuantity(40);
    produceItem.setExpirationDate("May 5, 2012");

    produceItemPtr = &produceItem;

    genericItemPtr ->PrintItem();
    produceItemPtr ->PrintItem();

    inventoryList.push_back(genericItemPtr);
    inventoryList.push_back(produceItemPtr);

    for (int i = 0; i < inventoryList.size(); ++i) {
        inventoryList.at(i)->PrintItem();
    }






  return 0;
}