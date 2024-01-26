// temperature.cpp
#include "header.h"
#include <iostream>
#include <algorithm>

using namespace std;

void TemperatureCalculator::inputTemperatures() {
    cout << "Enter temperature 1: ";
    cin >> temp1;

    cout << "Enter temperature 2: ";
    cin >> temp2;

    cout << "Enter temperature 3: ";
    cin >> temp3;
}

void TemperatureCalculator::calculateTemperatures() {
    lowestTemp = min(min(temp1, temp2), temp3);
    highestTemp = max(max(temp1, temp2), temp3);
    averageTemp = (temp1 + temp2 + temp3) / 3.0;
}

void TemperatureCalculator::displayResults() const {
    cout << "\nLowest Temperature: " << lowestTemp << " degrees\n";
    cout << "Highest Temperature: " << highestTemp << " degrees\n";
    cout << "Average Temperature: " << averageTemp << " degrees\n";
}
