#include "header.h"

int main() {
    TemperatureCalculator calculator;

    calculator.inputTemperatures();
    calculator.calculateLow();
    calculator.calculateHigh();
    calculator.calculateAvg();
    calculator.calculateDiff();
    calculator.displayResults();

    return 0;
}
