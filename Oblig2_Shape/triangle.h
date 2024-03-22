#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "base.h"
#include <cmath> // For sqrt function

class Triangle : public BaseShape2D {
private:
    double base;
    double height;

public:
    Triangle(Color c, double b, double h) : BaseShape2D(c), base(b), height(h) {}

    //area = half of base * height
    double area() const override {
        return 0.5 * base * height;
    }

    //perimeter of right hand triangle = sqrt(base^2 + height^2)
    double perimeter() const override {
        double hypotenuse = sqrt(base * base + height * height);
        return base + height + hypotenuse;
    }

    //scale by multipling base and height by scale factor
    void operator*(double scale) override {
        base *= scale;
        height *= scale;
    }

protected:
    std::string getShapeName() const override {
        return "Triangle";
    }

    //print function
    void printDetails() const override {
        std::cout << "Base: " << base << ". ";
        std::cout << "Height: " << height << ". ";
        std::cout << "Area: " << area() << ". ";
        std::cout << "Perimeter: " << perimeter() << ". ";
    }
};

#endif // TRIANGLE_H
