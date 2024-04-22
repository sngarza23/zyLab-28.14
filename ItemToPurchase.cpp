#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
// Parameterized constructor to assign item name, item description, item price, and item quantity (default values of 0). (1 pt)
// Public member functions
// SetDescription() mutator & GetDescription() accessor (2 pts)
// PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
// PrintItemDescription() - Outputs the item name and description
// Private data members
// string itemDescription - Initialized in default constructor to "none"
