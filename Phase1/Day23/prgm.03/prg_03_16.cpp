#include <iostream>
#include <cstring> 

using std::string;
using std::cout;
using std::endl;

// Base Class : Shape
class Shape {
protected:
    char* color;
    int borderWidth;

public:
    Shape(const char* shapeColor, int width) 
        : borderWidth(width) {
        color = new char[strlen(shapeColor) + 1];
        strcpy(color, shapeColor);
        cout << "Shape constructor called with color " << color << " and border width " << borderWidth << endl;
    }

    virtual ~Shape() {
        cout << "Shape destructor called for color " << color << endl;
        delete[] color;
    }

    virtual void draw() const = 0;               
    virtual double calculateArea() const = 0;   
};

// Derived Class : Circle
class Circle : public Shape {
private:
    double* radius;

public:
    Circle(const char* shapeColor, int width, double r) 
        : Shape(shapeColor, width) {
        radius = new double(r);
        cout << "Circle constructor called with radius " << *radius << endl;
    }

    ~Circle() override {
        cout << "Circle destructor called for radius " << *radius << endl;
        delete radius;
    }

    void draw() const override {
        cout << "Drawing a circle with color " << color << ", border width " << borderWidth << ", and radius " << *radius << endl;
    }

    double calculateArea() const override {
        return 3.14159 * (*radius) * (*radius);
    }
};


int main() {
    // Static Object
    cout << "Static Object:\n";
    Shape* staticCircle = new Circle("Red", 2, 5.0);

    staticCircle->draw();
    cout << "Area: " << staticCircle->calculateArea() << "\n";
    delete staticCircle;

    // Dynamic Object
    std::cout << "\nDynamic Objects:\n";
    Shape* dynamicCircle1 = new Circle("Blue", 3, 7.0);
    Shape* dynamicCircle2 = new Circle("Green", 1, 10.0);

    dynamicCircle1->draw();
    cout << "Area: " << dynamicCircle1->calculateArea() << "\n";

    dynamicCircle2->draw();
    cout << "Area: " << dynamicCircle2->calculateArea() << "\n";

    delete dynamicCircle1;
    delete dynamicCircle2;

    return 0;
}
