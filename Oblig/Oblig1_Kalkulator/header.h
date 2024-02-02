#ifndef HEADER_H
#define HEADER_H

class calculator{
public:
    void start();



private:
    void displayMainMenu(bool& multiCalculation);
    void addition(double& result, bool& multiCalculation);
    void subtraction(double& result, bool& multiCalculation);
    void multiplication(double& result, bool& multiCalculation);
    void division(double& result, bool& multiCalculation);
};

#endif // HEADER_H
