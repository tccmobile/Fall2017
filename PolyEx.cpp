//
// Created by Will Smith on 11/14/17.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class GenericItem {
public:
    void SetName(string newName) {
        itemName = newName;
    };

    void SetQuantity(int newQty) {
        itemQuantity = newQty;
    };

    virtual void PrintItem() {
        cout << itemName << " " << itemQuantity << endl;
    };

protected:
    string itemName;
    int itemQuantity;
};

class ProduceItem : public GenericItem { // Derived from GenericItem
public:
    void SetExpiration(string newDate) {
        expirationDate = newDate;
    };

    string GetExpiration() {
        return expirationDate;
    };

    virtual void PrintItem() {
        cout << itemName << " " << itemQuantity
             << " (Expires: " << expirationDate << ")" << endl;
    };

private:
    string expirationDate;
};

int main() {
    GenericItem* genericItemPtr = nullptr;
    ProduceItem* produceItemPtr = nullptr;
    vector<GenericItem*> inventoryList;
    int i = 0;

    genericItemPtr = new GenericItem;
    genericItemPtr->SetName("Smith Cereal");
    genericItemPtr->SetQuantity(9);

    produceItemPtr = new ProduceItem;
    produceItemPtr->SetName("Apple");
    produceItemPtr->SetQuantity(40);
    produceItemPtr->SetExpiration("May 5, 2012");

    genericItemPtr->PrintItem();
    produceItemPtr->PrintItem();

    // More common: Collection (e.g., vector) of objs
    // Polymorphism -- Correct Print() called
    inventoryList.push_back(genericItemPtr);
    inventoryList.push_back(produceItemPtr);

    cout << endl << "Inventory:" << endl;
    for (i = 0; i < inventoryList.size(); ++i) {
        inventoryList.at(i)->PrintItem();
    }

    return 0;
}