# E-commerce-Product-Sorter
Here’s a detailed overview that you can use for the **GitHub README** file of the **E-commerce Product Sorter** project:

---

# E-commerce Product Sorter

## Overview

The **E-commerce Product Sorter** is a command-line program that allows users to input product details (name, price, and rating) and then sort the products based on various criteria, such as price or rating. The program implements two sorting algorithms, **Bubble Sort** and **Selection Sort**, to demonstrate sorting in ascending and descending orders. 

This project provides a practical application of array manipulation and sorting algorithms, and is ideal for students and beginners learning about **arrays** and **sorting** in C++.

---

## Features

- **Dynamic Product Input**: Users can enter multiple products with details such as name, price, and rating.
- **Sorting Options**: 
  - Sort by Price (Low to High)
  - Sort by Price (High to Low)
  - Sort by Rating (High to Low)
- **Sorting Algorithms**:
  - **Bubble Sort**: An algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
  - **Selection Sort**: An algorithm that repeatedly selects the smallest or largest element from the unsorted part of the list and places it at the correct position.

---

## Project Structure

### `Product` Struct
A struct named `Product` is defined to hold the following details of a product:
- **name**: The name of the product (string).
- **price**: The price of the product (double).
- **rating**: The rating of the product out of 5 (double).

### Sorting Functions

- **`bubbleSort(Product[], int, bool)`**: 
  Sorts the products using the Bubble Sort algorithm. The `bool` parameter `byPrice` decides whether the sort is by price (`true`) or rating (`false`).

- **`selectionSort(Product[], int, bool)`**: 
  Sorts the products using the Selection Sort algorithm. Similar to Bubble Sort, the `bool` parameter `byPrice` controls the sorting criteria.

### Display Function

- **`displayProducts(Product[], int)`**: 
  This function takes the array of products and the number of products as parameters and prints the product details (name, price, and rating) to the console.

---

## How to Use

### 1. Clone the Repository

To start using the **E-commerce Product Sorter** project, first clone the repository to your local machine:

```bash
git clone https://github.com/your-username/ecommerce-product-sorter.git
```

### 2. Compile and Run

Once the repository is cloned, compile and run the program with a C++ compiler (e.g., `g++`):

```bash
g++ main.cpp -o ecommerce_sorter
./ecommerce_sorter
```

### 3. Input Product Details

The program will prompt you to enter the number of products you'd like to input. Then, for each product, you'll be asked to enter the name, price, and rating. 

Example input:
```
Enter the number of products: 3
Enter details for product 1
Product Name: Laptop
Price: $899.99
Rating (out of 5): 4.5

Enter details for product 2
Product Name: Smartphone
Price: $499.99
Rating (out of 5): 4.7

Enter details for product 3
Product Name: Tablet
Price: $299.99
Rating (out of 5): 4.2
```

### 4. Choose Sorting Criteria

The program will prompt you to choose one of the following sorting criteria:
- **1**: Sort by Price (Low to High)
- **2**: Sort by Price (High to Low)
- **3**: Sort by Rating (High to Low)

Example input:
```
Choose sorting criteria:
1. Sort by Price (Low to High)
2. Sort by Price (High to Low)
3. Sort by Rating (High to Low)
Enter your choice: 3
```

### 5. View Sorted Products

After selecting the sorting criteria, the program will display the sorted list of products.

Example output:
```
Sorted Products:
Product: Smartphone, Price: $499.99, Rating: 4.7
Product: Laptop, Price: $899.99, Rating: 4.5
Product: Tablet, Price: $299.99, Rating: 4.2
```

---

## Code Walkthrough

1. **Product Structure**:
   - The `Product` struct is used to define the product attributes such as name, price, and rating.
   
2. **Input Handling**:
   - The program dynamically takes the number of products (`n`) as input from the user and then prompts the user to enter each product’s name, price, and rating.
   
3. **Sorting Algorithms**:
   - **Bubble Sort**: The outer loop iterates through the array, and the inner loop compares adjacent elements and swaps them if they are in the wrong order (ascending for price or descending for rating).
   - **Selection Sort**: It iterates through the array and selects the smallest or largest element in each iteration to place it at the correct position.

4. **Display**:
   - The sorted product list is displayed, showing the product details (name, price, and rating) in the desired order.

---

## Enhancements & Future Work

- **Input Validation**: Add checks to ensure the user enters valid data (e.g., price should be positive, rating should be between 0 and 5).
- **More Sorting Algorithms**: Implement other efficient sorting algorithms like **Merge Sort** or **Quick Sort** for comparison and optimization.
- **User Interface**: Integrate with a GUI library like **Qt** or **GTK** to create a more user-friendly application.
- **Multiple Sorting Criteria**: Add an option to allow users to sort by multiple criteria, such as first by rating and then by price.

---

## Contributing

Feel free to fork this repository, submit issues, and contribute improvements. If you have any ideas for new features or improvements, don’t hesitate to create a pull request!

---
