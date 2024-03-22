#ifndef SQUARE_H
#define SQUARE_H

#include "base.h"

class Square : public BaseShape2D {
private:
    double side;

public:
    Square(Color c, double s) : BaseShape2D(c), side(s) {}

    double area() const override {
        return side * side;
    }

    double perimeter() const override {
        return 4 * side;
    }

    void operator*(double scale) override {
        side *= scale;
    }


protected:
    std::string getShapeName() const override {
        return "Square";
    }

    void printDetails() const override {
        std::cout << "Side Length: " << side << ". ";
        std::cout << "Area: " << area() << ". ";
        std::cout << "Perimeter: " << perimeter() << ". ";
    }
};

#endif // SQUARE_H
