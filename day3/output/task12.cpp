#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Shopping {
private:
    vector<int> itemCode;
    vector<int> itemPrice;

public:
    void addItem() {
        int code, price;
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item price: ";
        cin >> price;
        itemCode.push_back(code);
        itemPrice.push_back(price);
        cout << "Item added successfully.\n";
    }

    int displaySum() const {
        int total = 0;
        for (int price : itemPrice) {
            total += price;
        }
        return total;
    }

    void removeItem(int code) {
        for (size_t i = 0; i < itemCode.size(); ++i) {
            if (itemCode[i] == code) {
                itemCode.erase(itemCode.begin() + i);
                itemPrice.erase(itemPrice.begin() + i);
                cout << "Item " << code << " removed.\n";
                return;
            }
        }
        cout << "Item " << code << " not found.\n";
    }

    void displayItems() const {
        if (itemCode.empty()) {
            cout << "Cart is empty.\n";
            return;
        }
        cout << "Items in cart:\n";
        for (size_t i = 0; i < itemCode.size(); ++i) {
            cout << "Code: " << itemCode[i] << ", Price: $" << itemPrice[i] << endl;
        }
    }
};

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    Shopping cart;
    int choice;

    do {
        cout << "\n1. Add item to cart\n2. Display total price\n3. Remove item\n"
             << "4. Display items\n0. Exit\n";
        cout << "Enter choice: ";
        
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            clearInputBuffer();
            continue;
        }

        switch(choice) {
            case 1:
                cart.addItem();
                break;
            case 2:
                cout << "Total price is: $" << cart.displaySum() << endl;
                break;
            case 3:
                int code;
                cout << "Enter item code to remove: ";
                if (cin >> code) {
                    cart.removeItem(code);
                } else {
                    cout << "Invalid input. Please enter a number.\n";
                    clearInputBuffer();
                }
                break;
            case 4:
                cart.displayItems();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}