#include <iostream>
#include <iomanip>
#include "ShoppingCart.h"

using namespace std;

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    switch (option) {
        case 'a': {
            string name, description;
            int price, quantity;
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name: ";
            getline(cin >> ws, name);
            cout << "Enter the item description: ";
            getline(cin >> ws, description);
            cout << "Enter the item price: ";
            cin >> price;
            cout << "Enter the item quantity: ";
            cin >> quantity;
            ItemToPurchase newItem(name, description, price, quantity);
            theCart.AddItem(newItem);
            break;
        }
        case 'd': {
            string nameToRemove;
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove: ";
            getline(cin >> ws, nameToRemove);
            theCart.RemoveItem(nameToRemove);
            break;
        }
        case 'c': {
            string name;
            int newQuantity;
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name: ";
            getline(cin >> ws, name);
            cout << "Enter the new quantity: ";
            cin >> newQuantity;
            ItemToPurchase itemToModify(name, "", 0, newQuantity);
            theCart.ModifyItem(itemToModify);
            break;
        }
        case 'i': {
            theCart.PrintDescriptions();
            break;
        }
        case 'o': {
            theCart.PrintTotal();
            break;
        }
        case 'q': {
            cout << "Exiting program" << endl;
            break; // Exit switch statement
        }
        default:
            //cout << "Invalid option. Please try again." << endl;
            break;
    }
}

int main() {
    string customerName, currentDate;
    cout << "Enter customer's name:" << endl;
    getline(cin >> ws, customerName);
    cout << "Enter today's date:" << endl;
    getline(cin >> ws, currentDate);
    cout << endl;

    cout << endl;
    cout << "Customer name: " << customerName << endl;
    cout << "Today's date: " << currentDate << endl;
    cout << endl;

    ShoppingCart cart(customerName, currentDate);

    char option;
    do {
        PrintMenu();
        cout << "Choose an option:";
        cin >> option;
        cin.ignore(); // Ignore newline character after reading char
        cout << endl; // Provide spacing for clarity

        ExecuteMenu(option, cart);

        cout << endl; // Provide spacing for clarity
    } while (option != 'q');

    return 0;
}
