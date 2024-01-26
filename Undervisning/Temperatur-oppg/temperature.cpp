#include "header.h"
#include <iostream>
#include <vector>

using namespace std;

void TemperatureCalculator::inputTemperatures() {
    int numTemperatures;

    cout << "Enter the number of temperatures you want to input: ";
    cin >> numTemperatures;

    temperatures.resize(numTemperatures);

    for (int i = 0; i < numTemperatures; ++i) {
        cout << "Enter temperature " << i + 1 << ": ";
        cin >> temperatures[i];
    }
}

void TemperatureCalculator::calculateLow() {
    lowestTemp = temperatures[0];
    for (int i = 1; i < temperatures.size(); ++i) {
        if (temperatures[i] < lowestTemp) {
            lowestTemp = temperatures[i];
        }
    }
}

void TemperatureCalculator::calculateHigh() {
    highestTemp = temperatures[0];
    for (int i = 1; i < temperatures.size(); ++i) {
        if (temperatures[i] > highestTemp) {
            highestTemp = temperatures[i];
        }
    }
}

void TemperatureCalculator::calculateAvg() {
    double sum = 0.0;
    for (int i = 0; i < temperatures.size(); ++i) {
        sum += temperatures[i];
    }
    averageTemp = sum / temperatures.size();;
}

void TemperatureCalculator::displayResults() const {
    cout << "\nLowest Temperature: " << lowestTemp << " degrees\n";
    cout << "Highest Temperature: " << highestTemp << " degrees\n";
    cout << "Average Temperature: " << averageTemp << " degrees\n";
}
