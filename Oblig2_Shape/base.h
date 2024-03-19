#ifndef BASE_H
#define BASE_H

#include <iostream>

// Enum class for color
enum class Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
};

class BaseShape2D {
protected:
    Color color; // Color of the shape

public:
    BaseShape2D(Color c) : color(c) {}
    virtual ~BaseShape2D() {}

    // Pure virtual function for area
    virtual double area() const = 0;

    // Pure virtual function for perimeter
    virtual double perimeter() const = 0;

    // Overloaded scaling operator
    virtual void operator*(double scale) = 0;

    // Print function to display shape information
    virtual void print() const {
        std::string shapeName = getShapeName();
        std::string colorName = getColorName();

        std::cout << "Shape: " << shapeName << ". Color: " << colorName << ". ";
        printDetails();
    }

protected:
    // Virtual function to get the name of the shape
    virtual std::string getShapeName() const = 0;

    // Virtual function to get the name of the color
    std::string getColorName() const {
        switch (color) {
        case Color::RED:    return "Red";
        case Color::GREEN:  return "Green";
        case Color::BLUE:   return "Blue";
        case Color::YELLOW: return "Yellow";
        case Color::BLACK:  return "Black";
        case Color::WHITE:  return "White";
        default:            return "Unknown";
        }
    }

    // Virtual function to print specific details of the shape
    virtual void printDetails() const = 0;
};

#endif // BASE_H
