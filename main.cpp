//prompt the user for a customer's name and today's date. Output the name and date. Create an object of type ShoppingCart

#include <iostream>
#include <string>
#include "ShoppingCart.h"

using namespace std;


void PrintMenu() {
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change items' quantity" << endl;
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
         theCart.PrintDescriptions();
         break;
      case 'o':
         cout << "OUTPUT SHOPPING CART" << endl;
         cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart. GetDate() << endl;
         cout<< "Number of Items: " << theCart.GetNumItemsInCart() << endl;
         theCart.PrintDescriptions();
         theCart.PrintTotal();
         break;
      case 'q':
      cout << "Exiting program" << endl;
         break;
      default:
      cout << "No go again." << endl;
   }
}

int main() {
   string customerName, currentDate;
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   
   cout << "Enter today's date:" << endl;
   getline(cin, currentDate);
   
   cout <<"Customer name: " << customerName << endl;
   cout << "Today's date: " << currentDate << endl;

   ShoppingCart cart(customerName, currentDate);

   char choice;
   
   do { 
      PrintMenu();
       cout <<"Choose an option: ";
       cin >> choice;
       cin.ignore();

       ExecuteMenu(choice, cart);

      }while (choice != 'q');
   
   return 0;
}
