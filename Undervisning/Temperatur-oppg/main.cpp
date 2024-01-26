#include "header.h"

int main() {
    TemperatureCalculator calculator;

    calculator.inputTemperatures();
    calculator.calculateLow();
    calculator.calculateHigh();
    calculator.calculateAvg();
    calculator.displayResults();

    return 0;
}
