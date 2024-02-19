#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double calculateArea() {
        return length * width;
    }

private:
    double length;
    double width;
};

class Trapezoid {
public:
    Trapezoid(double base1, double base2, double height) : base1(base1), base2(base2), height(height) {}

    double calculateArea() {
        return (base1 + base2) * height / 2;
    }

private:
    double base1;
    double base2;
    double height;
};

int main() {
    Rectangle rectangle(5, 8);
    Trapezoid trapezoid(3, 7, 4);

    if (rectangle.calculateArea() > trapezoid.calculateArea()) 
        cout << "Rectangle has a larger area." << endl;
    else if (rectangle.calculateArea() < trapezoid.calculateArea()) 
        cout << "Trapezoid has a larger area." << endl;
    else 
        cout << "Both shapes have equal areas." << endl;

    return 0;
}
