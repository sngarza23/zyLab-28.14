#include <iostream>
#include <algorithm>
#include "ShoppingCart.h"
using namespace std;

#include "ItemToPurchase.h"

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
void ShoppingCart::AddItem( ItemToPurchase item) {
        cartItems.push_back(item);
    }
void ShoppingCart::RemoveItem(string itemName) {
        auto it = find_if(cartItems.begin(), cartItems.end(),
                           [&itemName](const ItemToPurchase& item) {
                               return item.GetName() == itemName;
                           });
      if (it != cartItems.end()) {
            cartItems.erase(it);
      } else {
            cout << "Item not found in cart. Nothing removed." << endl;
      }
    }

void ShoppingCart::ModifyItem(ItemToPurchase newItem) {
        auto it = find_if(cartItems.begin(), cartItems.end(),
                           [&newItem](const ItemToPurchase& item) {
                               return item.GetName() == newItem.GetName();
                          });
        if (it != cartItems.end()) {
            if (newItem.GetDescription() != "") {
                it->SetDescription(newItem.GetDescription());
            }
            if (newItem.GetPrice() != 0) {
                it->SetPrice(newItem.GetPrice());
            }
            if (newItem.GetQuantity() != 0) {
                it->SetQuantity(newItem.GetQuantity());
            }
        } else {
            cout << "Item not found in cart. Nothing modified." << endl;
        }
    }

int ShoppingCart::GetNumItemsInCart()  {
        int totalQuantity = 0;
    for (const auto& item : cartItems) {
            totalQuantity += item.GetQuantity();
    }
        return totalQuantity;
}

double ShoppingCart::GetCostOfCart() {
    int totalCost = 0;
      for (const auto& item : cartItems) {
          totalCost += item.GetQuantity() * item.GetPrice();
      }
        return totalCost;
}

void ShoppingCart::PrintTotal()  {
    if (cartItems.empty()) {
            cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
            cout << "Total: $"  << GetCostOfCart() << endl;
    }
}

void ShoppingCart::PrintDescriptions()  {
    if (cartItems.empty()) {
          cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
          cout << "Item Descriptions" << endl;
            for (const auto& item : cartItems) {
                cout << item.GetDescription() << endl;
            }
        }
    }

// private:
//     string customerName;
//     string currentDate;
//     vector<ItemToPurchase> cartItems;
//};
