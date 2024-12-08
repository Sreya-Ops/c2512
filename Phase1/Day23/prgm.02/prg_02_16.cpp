#include <iostream>
#include <string>

using  std::cout;
using std::endl;
using std::string;

// Base Class
class Product {
protected:
    string productName;
    double price;

public:
    Product(const string& name, double productPrice) 
        : productName(name), price(productPrice) {
        cout << "Product constructor called for " << productName << endl;
    }

    ~Product() {
        cout << "Product destructor called for " << productName << endl;
    }

    void addToCart() {
        cout << "Adding " << productName << " to the cart with price Rs." << price << endl;
    }
};

// Derived Class
class Clothing : public Product {
private:
    string size;

public:
    Clothing(const string& name, double productPrice, const string& clothingSize) 
        : Product(name, productPrice), size(clothingSize) {
        cout << "Clothing constructor called for " << productName << " with Size " << size << endl;
    }

    ~Clothing() {
        cout << "Clothing destructor called for " << productName << endl;
    }

    void applyDiscount(double discountPercentage) {
        double discount = ((price * discountPercentage) / 100.0);
        price -= discount;
        cout << "Applied " << discountPercentage << "% discount. New price is Rs." << price << endl;
    }
};

int main() {
    
    cout << "Creating static objects:\n";
    Product staticProduct("Laptop", 35000.0);
    Clothing staticClothing("T-Shirt", 500.0, "M");

    staticProduct.addToCart();
    staticClothing.addToCart();
    staticClothing.applyDiscount(20.0);

    cout << "\nCreating dynamic objects:\n";
    Product* dynamicProduct = new Product("Smartphone", 18000.0);
    Clothing* dynamicClothing = new Clothing("Jeans", 1200.0, "L");

    dynamicProduct->addToCart();
    dynamicClothing->addToCart();
    dynamicClothing->applyDiscount(15.0);

    cout << "\ndeleting\n";
    delete dynamicProduct;
    delete dynamicClothing;

    return 0;
}
