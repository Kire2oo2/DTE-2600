#include "header.h"
#include <iostream>




void calculator::start(){
    int choice;
    do {
        displayMainMenu();

        // Check if input is valid
        if (!(std::cin >> choice) || std::cin.peek() != '\n') {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;

            //reset error flag for input
            std::cin.clear();
            // Goes through the entire input buffer and empties it if it's invalid
            while (std::cin.get() != '\n');
            continue;
        }

        switch (choice) {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            std::cout << "The program is quitting" << std::endl;
            break;
        default:
            std::cout << "Invalid operation, try again" << std::endl;
        }

    } while (choice != 5); //stopper programmet/loopen hvis brukeren velger 5 for å avslutte
}

void calculator::displayMainMenu(){
    std::cout << "\n"
            "Welcome to calculator V0.01\n"
            "1. Addition\n"
            "2. Subtraction\n"
            "3. Multiplication\n"
            "4. Division\n"
            "5. Quit the program\n\n"
            "please choose an option: ";
}

void calculator::addition(){
    double num1, num2;
    std::cout << "Add two numbers:\n"
                 "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
    std::cout << "result: " << num1 + num2 << std::endl;
}

void calculator::subtraction(){
    double num1, num2;
    std::cout << "Subtract two numbers:\n"
                 "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
    std::cout << "Result: " << num1 - num2 << std::endl;
}

void calculator::multiplication(){
    double num1, num2;
    std::cout << "Multiply two numbers:\n"
                 "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
    std::cout << "Result: " << num1 * num2 << std::endl;
}

void calculator::division(){
    double num1, num2;
    std::cout << "Divide two numbers:\n"
                 "Number 1: ";
    std::cin >> num1;
    do {
        std::cout << "Number 2 (can't be zero): ";
        std::cin >> num2;
    } while (num2 == 0);

    std::cout << "Result: " << num1 / num2 << std::endl;
}
