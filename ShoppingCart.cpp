#include <iostream>
#include <iomanip>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) {
    customerName = name;
    currentDate = date;
}

string ShoppingCart::GetCustomerName() const {
    return customerName;
}

string ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name) {
    bool found = false;
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if (it->GetName() == name) {
            cartItems.erase(it);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
    bool found = false;
    for (auto& cartItem : cartItems) {
        if (cartItem.GetName() == item.GetName()) {
            if (item.GetDescription() != "none") {
                cartItem.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItem.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItem.SetQuantity(item.GetQuantity());
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

int ShoppingCart::GetNumItemsInCart() {
    int totalQuantity = 0;
    for (const auto& item : cartItems) {
        totalQuantity += item.GetQuantity();
    }
    return totalQuantity;
}

double ShoppingCart::GetCostOfCart() {
    double totalCost = 0.0;
    for (const auto& item : cartItems) {
        totalCost += (item.GetPrice() * item.GetQuantity());
    }
    return totalCost;
}

void ShoppingCart::PrintTotal() {
   cout << "OUTPUT SHOPPING CART" << endl;
   cout << customerName << "'s Shopping Cart - " << currentDate << endl;
   cout << "Number of Items: " << GetNumItemsInCart() << endl;
   cout << endl;
   if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
        cout << endl;
        //cout << fixed << setprecision(2) << "Total: $0" << endl;
        cout << fixed << "Total: $0" << endl;
    } else {
        for (const auto& item : cartItems) {
            item.PrintItemCost();
        }
        cout << endl;
        cout << fixed << setprecision(0) << "Total: $" << GetCostOfCart() << endl;

    }
}

void ShoppingCart::PrintDescriptions() {
   cout << "OUTPUT ITEMS' DESCRIPTION" << endl;
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << endl;
    cout << "Item Descriptions" << endl;
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        for (const auto& item : cartItems) {
            item.PrintItemDescription();
        }
    }
}
