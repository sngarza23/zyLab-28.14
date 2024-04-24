#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
  cout << " MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
   cout << endl;
   cout << "Choose an option: " << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   switch(option) {
      case 'a':
         break;
      case 'd':
         break;
      case 'c':
         break;
      case 'i':
         break;
      case 'q':
         break;
      default:
      cout << "No go again." << endl;
   }
}

int main() {
   string customerName, currentDate;
   cout << "Enter customer's name: ";
   getline(cin, customerName);
   cout << "Enter today's date: ";
   getline(cin, currentDate);
   cout <<"Customer name: " << customerName << endl;
   cout << "Today's date: " << currentDate << endl;

   ShoppingCart cart(customerName, currentDate);

   char choice;
   do { PrintMenu();
       cout <<"Choose an option: ";
       cin >> choice;
       cin.ignore();

       ExecuteMenu(choice, cart);

      } while (choice != 'q');
   
   return 0;
}
