#ifndef CIRCLE_H
#define CIRCLE_H

#include "base.h"

class Circle : public BaseShape2D {
private:
    double radius;

public:
    Circle(Color c, double r) : BaseShape2D(c), radius(r) {}

    double area() const override {
        return 3.14 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14 * radius;
    }

    void operator*(double scale) override {
        radius *= scale;
    }

protected:
    std::string getShapeName() const override {
        return "Circle";
    }

    void printDetails() const override {
        std::cout << "Radius: " << radius << ". ";
        std::cout << "Area: " << area() << ". ";
        std::cout << "Perimeter: " << perimeter() << ". ";
    }
};

#endif // CIRCLE_H
