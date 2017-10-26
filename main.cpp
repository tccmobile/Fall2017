#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

int main() {

    string itemName;
    int itemPrice;
    int itemQuanity;

    cout<<"Item 1"<<endl;
    cout<<"Enter the item name:"<<endl;

    getline(cin,itemName);
    cout<<"Enter the item price:"<<endl;
    cin>>itemPrice;
    cout<<"Enter the item quantity:"<<endl;
    cin>>itemQuanity;

    ItemToPurchase item1;
    item1.SetName(itemName);
    item1.SetPrice(itemPrice);
    item1.SetQuantity(itemQuanity);

    cin.ignore();

    cout<<endl;

    cout<<"Item 2"<<endl;
    cout<<"Enter the item name:"<<endl;

    getline(cin,itemName);
    cout<<"Enter the item price:"<<endl;
    cin>>itemPrice;
    cout<<"Enter the item quantity:"<<endl;
    cin>>itemQuanity;

    ItemToPurchase item2;
    item2.SetName(itemName);
    item2.SetPrice(itemPrice);
    item2.SetQuantity(itemQuanity);

    int totalCost;

    cout<<"TOTAL COST"<<endl;
    cout<<item1.GetName()<<" "<<item1.GetQuantity()<<" @ $"<<item1.GetPrice()<<" = $"<<item1.GetQuantity()*item1.GetPrice()<<endl;
    cout<<item2.GetName()<<" "<<item2.GetQuantity()<<" @ $"<<item2.GetPrice()<<" = $"<<item2.GetQuantity()*item2.GetPrice()<<endl;

    cout<<endl;
    cout<<"Total: $"<<(item1.GetQuantity()*item1.GetPrice())+(item2.GetQuantity()*item2.GetPrice())<<endl;



    return 0;
}