#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual double area() = 0;          // pure virtual function (abstract class)
    virtual ~Shape() {}                 // virtual destructor (good practice)
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}

    double area() override {
        return 3.14159 * r * r;
    }
};

class Rectangle : public Shape {
    double l, b;
public:
    Rectangle(double length, double breadth) : l(length), b(breadth) {}

    double area() override {
        return l * b;
    }
};

int main() {
    int type;
    cin >> type;

    Shape* s = nullptr;                 // base pointer

    if (type == 1) {
        double r;
        cin >> r;
        s = new Circle(r);              // circle object
    } 
    else if (type == 2) {
        double l, b;
        cin >> l >> b;
        s = new Rectangle(l, b);        // rectangle object
    } 
    else {
        cout << "Invalid type";
        return 0;
    }

    cout << fixed << setprecision(2) << s->area();  // runtime dispatch
    delete s;                                       // free memory

    return 0;
}
