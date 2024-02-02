#ifndef HEADER_H
#define HEADER_H

class calculator{
public:
    void start();



private:
    double num1, num2;
    int choice;
    double resultMulti = 0;
    bool multiCalculation = false;

    void input1(double& result,double& num1,double& num2);
    void input2(double& num1,double& num2);

    void displayMainMenu(bool& multiCalculation);
    void addition(double& result, bool& multiCalculation);
    void subtraction(double& result, bool& multiCalculation);
    void multiplication(double& result, bool& multiCalculation);
    void division(double& result, bool& multiCalculation);
};

#endif // HEADER_H
