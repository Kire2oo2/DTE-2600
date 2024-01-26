#include "header.h"

int main() {
    TemperatureCalculator calculator;

    calculator.inputTemperatures();
    calculator.calculateTemperatures();
    calculator.displayResults();

    return 0;
}
