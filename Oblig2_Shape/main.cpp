#include <iostream>
#include "circle.h"
#include "square.h"
#include "triangle.h"

int main() {
    Circle circle(Color::RED, 2.0);
    Square square(Color::GREEN, 3.0);
    Triangle triangle(Color::BLUE, 4.0, 5.0);

    int choice;
    double scale;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Circle" << std::endl;
        std::cout << "2. Square" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Circle:" << std::endl;
            circle.print();
            std::cout << std::endl;
            std::cout << "Enter scaling factor: ";
            std::cin >> scale;
            circle * scale;
            circle.print();
            std::cout << std::endl;
            break;
        case 2:
            std::cout << "Square:" << std::endl;
            square.print();
            std::cout << std::endl;
            std::cout << "Enter scaling factor: ";
            std::cin >> scale;
            square * scale;
            square.print();
            std::cout << std::endl;
            break;
        case 3:
            std::cout << "Triangle:" << std::endl;
            triangle.print();
            std::cout << std::endl;
            std::cout << "Enter scaling factor: ";
            std::cin >> scale;
            triangle * scale;
            triangle.print();
            std::cout << std::endl;
            break;
        case 0:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 0);

    return 0;
}
