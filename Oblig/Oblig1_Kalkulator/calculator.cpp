#include "header.h"
#include <iostream>

using namespace std;


void calculator::start(){
    int choice;
    do {
        displayMainMenu();
        std::cin >> choice;

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
    cout << "\n\nWelcome to calculator V0.01\n"
            "1. Addition\n"
            "2. Subtraction\n"
            "3. Multiplication\n"
            "4. Division\n\n"
            "please choose an option: ";
}

void calculator::addition(){
    double num1, num2;
    cout << "Add two numbers:\n";
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "result: " << num1 + num2 << endl;
}

void calculator::subtraction(){
    double num1, num2;
    cout << "Subtract two numbers:\n";
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Result: " << num1 - num2 << endl;
}

void calculator::multiplication(){
    double num1, num2;
    cout << "Multiply two numbers:\n";
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

void calculator::division(){
    double num1, num2;
    cout << "Divide two numbers:\n";
    cout << "Number 1: ";
    cin >> num1;
    do {
        cout << "Number 2 (can't be zero): ";
        cin >> num2;
    } while (num2 == 0);

    cout << "Result: " << num1 / num2 << endl;
}
