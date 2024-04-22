#include <iostream>
using namespace std;
#include "ItemToPurchase.h"
// Parameterized constructor to assign item name, item description, item price, and item quantity (default values of 0).
ItemToPurchase::ItemToPurchase(string& itemName, string& itemDescription, int itemPrice, int itemQuantity) {
// Public member functions
this->itemName = itemName;
this->itemDescription = itemDescription;
this->itemPrice = itemPrice;
this->itemQuantity = itemQuantity;
}

// SetDescription() mutator & GetDescription() accessor (2 pts)
// PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
// PrintItemDescription() - Outputs the item name and description
// Private data members
// string itemDescription - Initialized in default constructor to "none"
