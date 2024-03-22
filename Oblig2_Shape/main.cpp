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
    double newValue;

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
            std::cout << "1. Scale\n2. Enter new radius\n0. Back\nEnter your choice: ";
            std::cin >> choice;
            switch(choice) {
            case 1:
                std::cout << "Enter scaling factor: ";
                std::cin >> scale;
                circle * scale;
                break;
            case 2:
                std::cout << "Enter new radius: ";
                std::cin >> newValue;
                circle = Circle(Color::RED, newValue);
                break;
            case 0:
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
            std::cout << std::endl;
            circle.print();
            std::cout << std::endl;
            break;
        case 2:
            std::cout << "Square:" << std::endl;
            square.print();
            std::cout << std::endl;
            std::cout << "1. Scale\n2. Enter new side length\n0. Back\nEnter your choice: ";
            std::cin >> choice;
            switch(choice) {
            case 1:
                std::cout << "Enter scaling factor: ";
                std::cin >> scale;
                square * scale;
                break;
            case 2:
                std::cout << "Enter new side length: ";
                std::cin >> newValue;
                square = Square(Color::GREEN, newValue);
                break;
            case 0:
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
            std::cout << std::endl;
            square.print();
            std::cout << std::endl;
            break;
        case 3:
            std::cout << "Triangle:" << std::endl;
            triangle.print();
            std::cout << std::endl;
            std::cout << "1. Scale\n2. Enter new base and height\n0. Back\nEnter your choice: ";
            std::cin >> choice;
            switch(choice) {
            case 1:
                std::cout << "Enter scaling factor: ";
                std::cin >> scale;
                triangle * scale;
                break;
            case 2:
                double newBase, newHeight;
                std::cout << "Enter new base: ";
                std::cin >> newBase;
                std::cout << "Enter new height: ";
                std::cin >> newHeight;
                triangle = Triangle(Color::BLUE, newBase, newHeight);
                break;
            case 0:
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
            std::cout << std::endl;
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
