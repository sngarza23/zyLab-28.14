#include <iostream>
#include "ItemToPurchase.h"

// Parameterized constructor to assign item name, item description, item price, and item quantity (default values of 0).
ItemToPurchase::ItemToPurchase(string itemName, string itemDescription, int itemPrice, int itemQuantity) {

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
}

// SetDescription() mutator & GetDescription() accessor (2 pts)
void ItemToPurchase::SetDescription(string description) {
  itemDescription = description;
}
void ItemToPurchase::SetPrice(int price) {
  itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quantity) {
  itemQuantity = quantity;
}

string ItemToPurchase::GetName() const{
  return itemName; 
}
int ItemToPurchase::GetPrice() const{
  return itemPrice;
}

string ItemToPurchase::GetDescription() const{
  return itemDescription;
}
int ItemToPurchase::GetQuantity() const {
   return itemQuantity;
}

// PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
void ItemToPurchase::PrintItemCost() {
  cout << itemName << " " << itemQuantity << "$ "<< itemPrice << "= $ "<< itemPrice * itemQuantity << endl;
}
// PrintItemDescription() - Outputs the item name and description
void ItemToPurchase::PrintItemDescription() {
  cout << itemName << ": " << itemDescription << endl;
}
