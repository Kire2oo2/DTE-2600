#include <iostream>
#include "circle.h"
#include "square.h"
#include "triangle.h"

// Functions
void printMenu();
void handleCircle(Circle& circle);
void handleSquare(Square& square);
void handleTriangle(Triangle& triangle);

//main loop, handles only the main menu and its options to jump into the other functions with the given shape
int main() {
    Circle circle(Color::RED, 2.0);
    Square square(Color::GREEN, 3.0);
    Triangle triangle(Color::BLUE, 4.0, 5.0);

    int choice;

    do {
        printMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            handleCircle(circle);
            break;
        case 2:
            handleSquare(square);
            break;
        case 3:
            handleTriangle(triangle);
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

void printMenu() {
    std::cout << "Menu:" << std::endl;
    std::cout << "1. Circle" << std::endl;
    std::cout << "2. Square" << std::endl;
    std::cout << "3. Triangle" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

//Function to both print out menu of options and take input to change color of given shape
void handleColorChange(BaseShape2D& shape) {
    //variables to handle inputs from user
    int choice;

    //prints out the current shapes size / color, aswell as gives the user the menu to choose what to do with this shape:
    std::cout << "Select color:\n1. Red\n2. Green\n3. Blue\nEnter your choice: ";
    std::cin >> choice;
    switch (choice) {
    case 1:
        shape.setColor(Color::RED);
        break;
    case 2:
        shape.setColor(Color::GREEN);
        break;
    case 3:
        shape.setColor(Color::BLUE);
        break;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
}


//Function that handles all operations with circle shape
void handleCircle(Circle& circle) {
    //variables to handle inputs from user
    int choice;
    double scale;
    double newValue;

    //prints out the current shapes size / color, aswell as gives the user the menu to choose what to do with this shape:
    std::cout << "Circle:" << std::endl;
    circle.print();
    std::cout << std::endl;
    std::cout << "1. Scale\n2. Enter new radius and color\n0. Back\nEnter your choice: ";
    std::cin >> choice;

    //either scales the object or resets / asks for new size and color
    switch (choice) {
    case 1:
        std::cout << "Enter scaling factor: ";
        std::cin >> scale;
        circle * scale;
        break;
    case 2:
        std::cout << "Enter new radius: ";
        std::cin >> newValue;
        circle = Circle(Color::RED, newValue);
        handleColorChange(circle);
        break;
    case 0:
        break;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
    std::cout << std::endl;
    circle.print();
    std::cout << std::endl;
}

//Function that handles all operations with square shape
void handleSquare(Square& square) {
    //variables to handle inputs from user
    int choice;
    double scale;
    double newValue;

    //prints out the current shapes size / color, aswell as gives the user the menu to choose what to do with this shape:
    std::cout << "Square:" << std::endl;
    square.print();
    std::cout << std::endl;
    std::cout << "1. Scale\n2. Enter new side length and color\n0. Back\nEnter your choice: ";
    std::cin >> choice;

    //either scales the object or resets / asks for new size and color
    switch (choice) {
    case 1:
        std::cout << "Enter scaling factor: ";
        std::cin >> scale;
        square * scale;
        break;
    case 2:
        std::cout << "Enter new side length: ";
        std::cin >> newValue;
        square = Square(Color::GREEN, newValue);
        handleColorChange(square);
        break;
    case 0:
        break;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
    std::cout << std::endl;
    square.print();
    std::cout << std::endl;
}


//Function that handles all operations with triangle shape
void handleTriangle(Triangle& triangle) {
    //variables to handle inputs from user
    int choice;
    double scale;
    double newBase, newHeight;

    //prints out the current shapes size / color, aswell as gives the user the menu to choose what to do with this shape:
    std::cout << "Triangle:" << std::endl;
    triangle.print();
    std::cout << std::endl;
    std::cout << "1. Scale\n2. Enter new base and height + color\n0. Back\nEnter your choice: ";
    std::cin >> choice;


    //either scales the object or resets / asks for new size and color
    switch (choice) {
    case 1:
        std::cout << "Enter scaling factor: ";
        std::cin >> scale;
        triangle * scale;
        break;
    case 2:
        std::cout << "Enter new base: ";
        std::cin >> newBase;
        std::cout << "Enter new height: ";
        std::cin >> newHeight;
        triangle = Triangle(Color::BLUE, newBase, newHeight);
        handleColorChange(triangle);
        break;
    case 0:
        break;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
    std::cout << std::endl;
    triangle.print();
    std::cout << std::endl;
}
