#include <iostream>
#include <string>
using namespace std;

// Define struct
struct Product {
    string name;
    int id;
    int quantity;
    float price;
};

// Function to compute total stock value
float stockValue(Product p) {
    return p.quantity * p.price;
}

// Apply discount if stock value exceeds threshold
void applyDiscount(Product products[], int n, float threshold, float discountRate) {
    for(int i = 0; i < n; i++) {
        if(stockValue(products[i]) > threshold) {
            products[i].price *= (1 - discountRate);
        }
    }
}

// Find most valuable product
int mostValuable(Product products[], int n) {
    int index = 0;
    float maxValue = stockValue(products[0]);

    for(int i = 1; i < n; i++) {
        if(stockValue(products[i]) > maxValue) {
            maxValue = stockValue(products[i]);
            index = i;
        }
    }

    return index;
}

// Display low stock warning
void lowStockWarning(Product products[], int n, int limit) {
    cout << "\nLow Stock Products:\n";
    for(int i = 0; i < n; i++) {
        if(products[i].quantity < limit) {
            cout << products[i].name << " (ID: " << products[i].id << ") has low stock.\n";
        }
    }
}

// Print product details
void printProduct(Product p) {
    cout << "Name: " << p.name << endl;
    cout << "ID: " << p.id << endl;
    cout << "Quantity: " << p.quantity << endl;
    cout << "Price: " << p.price << endl;
    cout << "Stock Value: " << stockValue(p) << endl;
    cout << "-----------------------\n";
}

int main() {

    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product products[n];

    // Input products
    for(int i = 0; i < n; i++) {
        cout << "\nEnter product name: ";
        cin >> products[i].name;

        cout << "Enter ID: ";
        cin >> products[i].id;

        cout << "Enter quantity: ";
        cin >> products[i].quantity;

        cout << "Enter price: ";
        cin >> products[i].price;
    }

    float threshold, discount;
    cout << "\nEnter stock value threshold for discount: ";
    cin >> threshold;

    cout << "Enter discount rate (e.g., 0.1 for 10%): ";
    cin >> discount;

    applyDiscount(products, n, threshold, discount);

    cout << "\nAll Products:\n";
    for(int i = 0; i < n; i++) {
        printProduct(products[i]);
    }

    int index = mostValuable(products, n);
    cout << "\nMost Valuable Product:\n";
    printProduct(products[index]);

    int limit;
    cout << "\nEnter low stock limit: ";
    cin >> limit;

    lowStockWarning(products, n, limit);

    return 0;
}