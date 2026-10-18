#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    Shape* shapePtr;   // Base class pointer

    Circle c;
    Rectangle r;

    shapePtr = &c;
    shapePtr->draw();  // Calls Circle’s version

    shapePtr = &r;
    shapePtr->draw();  // Calls Rectangle’s version

    return 0;
}
