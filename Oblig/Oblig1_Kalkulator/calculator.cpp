#include "header.h"
#include <iostream>




void calculator::start(){
    int choice;
    double result = 0;
    bool multiCalculation = false;
    do {
        displayMainMenu(multiCalculation);

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
            addition(result,multiCalculation);
            break;
        case 2:
            subtraction(result,multiCalculation);
            break;
        case 3:
            multiplication(result,multiCalculation);
            break;
        case 4:
            division(result,multiCalculation);
            break;
        case 5:
            multiCalculation = !multiCalculation;
            break;
        case 6:
            std::cout << "The program is quitting" << std::endl;
            break;
        default:
            std::cout << "Invalid operation, try again" << std::endl;
        }

    } while (choice != 6); //stopper programmet/loopen hvis brukeren velger 5 for å avslutte
}

void calculator::displayMainMenu(bool& multiCalculation){
    std::cout << "\n"
            "Welcome to calculator V0.3\n"
            "1. Addition\n"
            "2. Subtraction\n"
            "3. Multiplication\n"
            "4. Division\n"
            "5. Toggle multi-calculation mode (currently: " << (multiCalculation ? "On )\n" : "Off )\n") <<
            "6. Quit the program\n\n"
            "please choose an option: ";
}



void calculator::addition(double& result, bool& multiCalculation){
    double num1, num2;
    if( multiCalculation == false){
        std::cout << "Add two numbers:\n"
                     "Number 1: ";
        std::cin >> num1;
        std::cout << "Number 2: ";
        std::cin >> num2;
        std::cout << "result: " << num1 + num2 << std::endl;
    }
    else{
        std::cout << "addition\n";
        std::cout << "number 1: " << result << "\n";
        std::cout << "number 2: ";
        std::cin >> num2;
        result = result + num2;
        std::cout << "result: " << result << std::endl;
    }
}

void calculator::subtraction(double& result, bool& multiCalculation){
    double num1, num2;
    if( multiCalculation == false){
        std::cout << "Subtract two numbers:\n"
                     "Number 1: ";
        std::cin >> num1;
        std::cout << "Number 2: ";
        std::cin >> num2;
        std::cout << "Result: " << num1 - num2 << std::endl;
    }
    else{
        std::cout << "Subtract\n";
        std::cout << "number 1: " << result << "\n";
        std::cout << "number 2: ";
        std::cin >> num2;
        result = result - num2;
        std::cout << "result: " << result << std::endl;
    }
}

void calculator::multiplication(double& result, bool& multiCalculation){
    double num1, num2;
    if( multiCalculation == false){
        std::cout << "Multiply two numbers:\n"
                     "Number 1: ";
        std::cin >> num1;
        std::cout << "Number 2: ";
        std::cin >> num2;
        std::cout << "Result: " << num1 * num2 << std::endl;
    }
    else{
        std::cout << "Multiply\n";
        std::cout << "number 1: " << result << "\n";
        std::cout << "Number 2: ";
        std::cin >> num2;
        result = result * num2;
        std::cout << "result: " << result << std::endl;
    }
}

void calculator::division(double& result, bool& multiCalculation){
    double num1, num2;
    if( multiCalculation == false){
        std::cout << "Divide two numbers:\n"
                     "Number 1: ";
        std::cout << "Number 2: ";
        std::cin >> num2;
        std::cout << "Result: " << num1 / num2 << std::endl;
    }
    else{
        std::cout << "Divide\n";
        std::cout << "number 1: " << result << "\n";
        std::cout << "Number 2: ";
        std::cin >> num2;
        result = result / num2;
        std::cout << "result: " << result << std::endl;
    }
}
