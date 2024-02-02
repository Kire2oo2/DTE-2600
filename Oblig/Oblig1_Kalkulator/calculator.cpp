#include "header.h"
#include <iostream>

void calculator::start(){  
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
            addition(resultMulti,multiCalculation);
            break;
        case 2:
            subtraction(resultMulti,multiCalculation);
            break;
        case 3:
            multiplication(resultMulti,multiCalculation);
            break;
        case 4:
            division(resultMulti,multiCalculation);
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
            "Welcome to calculator V0.4\n"
            "1. Addition\n"
            "2. Subtraction\n"
            "3. Multiplication\n"
            "4. Division\n"
            "5. Toggle multi-calculation mode (currently: " << (multiCalculation ? "On )\n" : "Off )\n") <<
            "6. Quit the program\n\n"
            "please choose an option: ";
}



void calculator::input1(double& resultMulti,double& num1,double& num2){
    std::cout << "number 1: " << resultMulti << "\n";
    std::cout << "Number 2: ";
    std::cin >> num2;
}


void calculator::input2(double& num1,double& num2){
    std::cout << "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
}



void calculator::addition(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input2(num1,num2);
        std::cout << "result: " << num1 + num2 << std::endl;
    }
    else{
        input1(resultMulti,num1,num2);
        resultMulti = resultMulti + num2;
        std::cout << "result: " << resultMulti << std::endl;
    }
}

void calculator::subtraction(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input2(num1,num2);
        std::cout << "result: " << num1 - num2 << std::endl;
    }
    else{
        input1(resultMulti,num1,num2);
        resultMulti = resultMulti - num2;
        std::cout << "result: " << resultMulti << std::endl;
    }
}

void calculator::multiplication(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input2(num1,num2);
        std::cout << "result: " << num1 * num2 << std::endl;
    }
    else{
        input1(resultMulti,num1,num2);
        resultMulti = resultMulti * num2;
        std::cout << "result: " << resultMulti << std::endl;
    }
}

void calculator::division(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input2(num1,num2);
        std::cout << "result: " << num1 / num2 << std::endl;
    }
    else{
        input1(resultMulti,num1,num2);
        resultMulti = resultMulti / num2;
        std::cout << "result: " << resultMulti << std::endl;
    }
}

