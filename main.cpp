#include <iostream>
using namespace std;

int main() {
    enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};

    GroceryItem userItem = GR_BANANAS;

    /* Your solution goes here  */
    switch (userItem) {
        case  (GR_APPLES):
            cout<<"Fruit"<<endl;
            break;
        case (GR_BANANAS):
            cout<<"Fruit"<<endl;
            break;
         case   (GR_JUICE):
         case   (GR_WATER):
            cout<<"Drink"<<endl;
            break;
        default:
            cout<<"Unknown"<<endl;
            break;
    }


    return 0;
}