#include "header.h"
#include <iostream>
#include <cmath>


//logic for main menu, and the main loop that continues until the user inputs 7 when main menu is up
//takes an input, checks if its an integer, then uses a switch statement to go to the given math function or toggle mode
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
            power(resultMulti,multiCalculation);
            break;
        case 6:
            squareRoot(resultMulti,multiCalculation);
            break;
        case 7:
            multiCalculation = !multiCalculation;
            break;
        case 8:
            std::cout << "The program is quitting" << std::endl;
            break;
        default:
            std::cout << "Invalid operation, try again" << std::endl;
        }

    } while (choice != 8); //stopper programmet/loopen hvis brukeren velger 5 for å avslutte
}

//main menu text output
void calculator::displayMainMenu(bool& multiCalculation){
    std::cout << "\n"
            "Welcome to calculator V0.6\n"
            "1. Addition\n"
            "2. Subtraction\n"
            "3. Multiplication\n"
            "4. Division\n"
            "5. Exponential\n"
            "6. Square Root\n"
            "7. Toggle multi-calculation mode (currently: " << (multiCalculation ? "On )\n" : "Off )\n") <<
            "8. Quit the program\n\n"
            "please choose an option: ";
}

//--- normal mode ---
//takes 2 inputs to use for calculations
void calculator::input(double& num1,double& num2){
    std::cout << "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
}
//prints out the result from a calculation
void calculator::output(double&result){
    std::cout << "result: " << result << std::endl;
}


//--- multi mode ---
//takes 1 input, uses the previous result for the first number / input
void calculator::inputMultiMode(double& resultMulti,double& num2){
    std::cout << "number 1: " << resultMulti << "\n";
    std::cout << "Number 2: ";
    std::cin >> num2;
}
void calculator::outputMultiMode(double&resultMulti){
    std::cout << "result: " << resultMulti << std::endl;
}


//calculating segments, all of these checks if the user has toggled multiCalculation or not
//if multiCalculation is on then it uses the multi mode functions to get the previous result and user input
//if multiCalculation is off then it gets the standard 2 inputs and outputs the result without using the result in future calculations
void calculator::addition(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input(num1,num2);
        result = num1 + num2;
        output(result);
    }
    else{
        inputMultiMode(resultMulti,num2);
        resultMulti = resultMulti + num2;
        outputMultiMode(resultMulti);
    }
}

void calculator::subtraction(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input(num1,num2);
        result = num1 - num2;
        output(result);
    }
    else{
        inputMultiMode(resultMulti,num2);
        resultMulti = resultMulti - num2;
        outputMultiMode(resultMulti);
    }
}

void calculator::multiplication(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input(num1,num2);
        result = num1 * num2;
        output(result);
    }
    else{
        inputMultiMode(resultMulti,num2);
        resultMulti = resultMulti * num2;
        outputMultiMode(resultMulti);
    }
}

void calculator::division(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        input(num1,num2);
        result = num1 / num2;
        output(result);
    }
    else{
        inputMultiMode(resultMulti,num2);
        resultMulti = resultMulti / num2;
        outputMultiMode(resultMulti);
    }
}

//small change in order to explain to the user whats the base number and whats the exponent
void calculator::power(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        std::cout << "num1 = base, num2 = exponent\n";
        input(num1,num2);
        result = std::pow(num1,num2);
        output(result);
    }
    else{
        std::cout << "num1 = base, num2 = exponent\n";
        inputMultiMode(resultMulti,num2);
        resultMulti = std::pow(resultMulti,num2);
        outputMultiMode(resultMulti);
    }
}

//small change since only one input is neccecary, also no input used for multiCalculation
void calculator::squareRoot(double& resultMulti, bool& multiCalculation){
    if( multiCalculation == false){
        std::cout << "Number: ";
        std::cin >> num1;
        result = std::sqrt(num1);
        output(result);
    }
    else{
        resultMulti = std::sqrt(resultMulti);
        outputMultiMode(resultMulti);
    }
}

