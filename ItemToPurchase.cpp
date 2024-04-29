#include "ItemToPurchase.h"
#include <iostream>

ItemToPurchase::ItemToPurchase() : itemName("none"), itemDescription("none"), itemPrice(0), itemQuantity(0) {}

ItemToPurchase::ItemToPurchase(const std::string& name, const std::string& description, int price, int quantity)
    : itemName(name), itemDescription(description), itemPrice(price), itemQuantity(quantity) {}

void ItemToPurchase::SetName(const std::string& name) {
    itemName = name;
}

void ItemToPurchase::SetDescription(const std::string& description) {
    itemDescription = description;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

std::string ItemToPurchase::GetName() const {
    return itemName;
}

std::string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::PrintItemCost() const {
    std::cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << std::endl;
}

void ItemToPurchase::PrintItemDescription() const {
    std::cout << itemName << ": " << itemDescription << std::endl;
}
