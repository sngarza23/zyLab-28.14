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
//Default constructor
ItemToPurchase::ItemToPurchase() {
  itemName = "none";
  itemDescription = "none";
  itemPrice = 0;
  itemQuantity = 0;
// SetDescription() mutator & GetDescription() accessor (2 pts)
void ItemToPurchase::SetDescription(string& description) {
  itemDescription = description;
}
string ItemToPurchase::GetDescription() {
  return itemDescription;
}
// PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
void ItemToPurchase::PrintItemCost() {
  cout << itemName << " " << itemQuantity << " "<< itemPrice << " "<< itemPrice * itemQuantity << endl;
// PrintItemDescription() - Outputs the item name and description
void ItemToPurchase::PrintItemDescription() {
  cout << itemName << " " << itemDescription << endl;
// Private data members
// string itemDescription - Initialized in default constructor to "none"
