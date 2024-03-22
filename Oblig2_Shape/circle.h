#ifndef CIRCLE_H
#define CIRCLE_H

#include "base.h"

class Circle : public BaseShape2D {
private:
    double radius;

public:
    Circle(Color c, double r) : BaseShape2D(c), radius(r) {}

    //formula for area pi*r^2
    double area() const override {
        return 3.14 * radius * radius;
    }

    //perimiter = 2*pi*r
    double perimeter() const override {
        return 2 * 3.14 * radius;
    }

    //scale buy multiplying radius with scale factor
    void operator*(double scale) override {
        radius *= scale;
    }

protected:
    std::string getShapeName() const override {
        return "Circle";
    }

    //print function
    void printDetails() const override {
        std::cout << "Radius: " << radius << ". ";
        std::cout << "Area: " << area() << ". ";
        std::cout << "Perimeter: " << perimeter() << ". ";
    }
};

#endif // CIRCLE_H
