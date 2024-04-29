#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
#include <iostream> 

class ItemToPurchase {
public:
    ItemToPurchase();
    ItemToPurchase(const std::string& name, const std::string& description, int price, int quantity);

    void SetName(const std::string& name);
    void SetDescription(const std::string& description);
    void SetPrice(int price);
    void SetQuantity(int quantity);

    std::string GetName() const;
    std::string GetDescription() const;
    int GetPrice() const;
    int GetQuantity() const;

    void PrintItemCost() const;
    void PrintItemDescription() const;

private:
    std::string itemName;
    std::string itemDescription;
    int itemPrice;
    int itemQuantity;
};

#endif
