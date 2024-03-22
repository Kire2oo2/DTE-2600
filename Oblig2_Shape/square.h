#ifndef SQUARE_H
#define SQUARE_H

#include "base.h"

class Square : public BaseShape2D {
private:
    double side;

public:
    Square(Color c, double s) : BaseShape2D(c), side(s) {}

    //formula for area = s^2
    double area() const override {
        return side * side;
    }

    //formula for perimiter = 4*s
    double perimeter() const override {
        return 4 * side;
    }

    //scale by multiplying s by scale factor
    void operator*(double scale) override {
        side *= scale;
    }


protected:
    std::string getShapeName() const override {
        return "Square";
    }

    //print function
    void printDetails() const override {
        std::cout << "Side Length: " << side << ". ";
        std::cout << "Area: " << area() << ". ";
        std::cout << "Perimeter: " << perimeter() << ". ";
    }
};

#endif // SQUARE_H
