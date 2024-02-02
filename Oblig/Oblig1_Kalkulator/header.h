#ifndef HEADER_H
#define HEADER_H

class calculator{
public:
    void start();



private:
    double num1, num2;
    int choice;
    double result = 0;
    double resultMulti = 0;
    bool multiCalculation = false;

    void input(double& num1,double& num2);
    void inputMultiMode(double& resultMulti,double& num2);

    void output(double&result);
    void outputMultiMode(double&resultMulti);


    void displayMainMenu(bool& multiCalculation);
    void addition(double& resultMulti, bool& multiCalculation);
    void subtraction(double& resultMulti, bool& multiCalculation);
    void multiplication(double& resultMulti, bool& multiCalculation);
    void division(double& resulMultit, bool& multiCalculation);
    void power(double& resultMulti, bool& multiCalculation);
};

#endif // HEADER_H
