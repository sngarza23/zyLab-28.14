// https://github.com/sngarza23/zyLab-28.14.git
//partner Chiara Tesoriero and Sam Garza
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
    cout << "q - Quit" << endl << endl;
}

void ExecuteMenu(char choice, ShoppingCart& cart) {
    switch (choice) {
        case 'a': {
            string name, description;
            int price, quantity;
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin >> ws, name);
            cout << "Enter the item description:" << endl;
            getline(cin >> ws, description);
            cout << "Enter the item price:" << endl;
            cin >> price;
            cout << "Enter the item quantity:" << endl;
            cin >> quantity;
            ItemToPurchase newItem(name, description, price, quantity);
            cart.AddItem(newItem);
            break;
        }
        case 'd': {
            string itemName;
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            getline(cin >> ws, itemName);
            cart.RemoveItem(itemName);
            break;
        }
        case 'c': {
            string name;
            int quantity;
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin >> ws, name);
            cout << "Enter the new quantity:" << endl;
            cin >> quantity;
            ItemToPurchase modifiedItem(name, "", 0, quantity);
            cart.ModifyItem(modifiedItem);
            break;
        }
        case 'i':
            //cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            cart.PrintDescriptions();
            break;
        case 'o':
            //cout << "OUTPUT SHOPPING CART" << endl;
            cart.PrintTotal();
            break;
        case 'q':
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
    }
}

int main() {
    string customerName, currentDate;
    cout << "Enter customer's name:" << endl;
    getline(cin >> ws, customerName);
    cout << "Enter today's date:" << endl;
    getline(cin >> ws, currentDate);
    cout << endl;
    cout << "Customer name: " << customerName << endl;
    cout << "Today's date: " << currentDate << endl << endl;

    ShoppingCart cart(customerName, currentDate);

    char choice;
    do {
        PrintMenu();
        cout << "Choose an option:";
        cin >> choice;
        ExecuteMenu(choice, cart);
        cout << endl;
    } while (choice != 'q');

    return 0;
}
