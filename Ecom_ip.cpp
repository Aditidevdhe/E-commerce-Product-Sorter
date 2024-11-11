#include <iostream>
#include <string>
using namespace std;

// Define a structure for Product
struct Product {
    string name;
    double price;
    double rating;
};

// Bubble sort to sort products by price or rating
void bubbleSort(Product products[], int n, bool byPrice) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bool swapNeeded = false;
            if (byPrice) {
                // Compare by price (ascending order)
                if (products[j].price > products[j + 1].price) {
                    swapNeeded = true;
                }
            } else {
                // Compare by rating (descending order)
                if (products[j].rating < products[j + 1].rating) {
                    swapNeeded = true;
                }
            }
            if (swapNeeded) {
                // Swap products[j] and products[j+1]
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }
}

// Selection sort to sort products by price or rating
void selectionSort(Product products[], int n, bool byPrice) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (byPrice) {
                // Compare by price (ascending order)
                if (products[j].price < products[minIdx].price) {
                    minIdx = j;
                }
            } else {
                // Compare by rating (descending order)
                if (products[j].rating > products[minIdx].rating) {
                    minIdx = j;
                }
            }
        }
        // Swap products[i] with products[minIdx]
        Product temp = products[minIdx];
        products[minIdx] = products[i];
        products[i] = temp;
    }
}

// Function to display the list of products
void displayProducts(Product products[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Product: " << products[i].name
             << ", Price: $" << products[i].price
             << ", Rating: " << products[i].rating << endl;
    }
}

int main() {
    int n;
    
    // Ask the user for the number of products
    cout << "Enter the number of products: ";
    cin >> n;
    
    // Declare an array to store products
    Product products[n];
    
    // Take input for each product
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for product " << i + 1 << endl;
        cout << "Product Name: ";
        cin.ignore(); // To clear the buffer before taking string input
        getline(cin, products[i].name);  // Get the product name as a string
        cout << "Price: $";
        cin >> products[i].price;  // Get the product price
        cout << "Rating (out of 5): ";
        cin >> products[i].rating;  // Get the product rating
    }

    // User input for sorting criteria
    int choice;
    cout << "\nChoose sorting criteria:\n";
    cout << "1. Sort by Price (Low to High)\n";
    cout << "2. Sort by Price (High to Low)\n";
    cout << "3. Sort by Rating (High to Low)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(products, n, true);  // Sort by price (low to high)
            break;
        case 2:
            bubbleSort(products, n, true);  // Sort by price (low to high), reverse after
            for (int i = 0; i < n / 2; i++) {
                Product temp = products[i];
                products[i] = products[n - 1 - i];
                products[n - 1 - i] = temp;
            }
            break;
        case 3:
            selectionSort(products, n, false);  // Sort by rating (high to low)
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    // Display the sorted list of products
    cout << "\nSorted Products:\n";
    displayProducts(products, n);

    return 0;
}
