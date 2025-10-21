#include <iostream>
using namespace std;

// Base class 
class Shape {
    private:
        float width;
        float length;

    public:
        // Constructor to initialize dimensions
        Shape(float w, float l) {
            this->width = w;
            this->length = l;
        }

        void setDimensions(float w, float l) {
            this->width = w;
            this->length = l;
        }

        void setsize(float w, float l) {
            setDimensions(w, l);
        }

        float getWidth() const {
            return width;
        }

        float getLength() const {
            return length;
        }
};

// Derived class Rectangle inherits from Shape
class Rectangle : public Shape {
    public:
        // Constructor
        Rectangle(float width, float length) : Shape(width, length) {}

        float area() {
            return getWidth() * getLength();
        }

        float perimeter() {
            return 2 * (getWidth() + getLength());
        }

        void display() {
            cout << "Rectangle dimensions: " << getLength() << " x " << getWidth() << endl;
            cout << "Area: " << area() << endl;
            cout << "Perimeter: " << perimeter() << endl;
        }
};

int main() {
    Rectangle r(10, 4);
    r.display();
    r.setDimensions(7, 2);
    cout << "\nAfter changing dimensions:" << endl;
    r.display();

    return 0;
}