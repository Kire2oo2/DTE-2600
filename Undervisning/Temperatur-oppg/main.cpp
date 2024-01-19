#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

// Function to get temperatures from the user
void inputTemperatures(double& temp1, double& temp2, double& temp3) {
    printf("Enter temperature 1: ");
    cin >> temp1;

    printf("Enter temperature 2: ");
    cin >> temp2;

    printf("Enter temperature 3: ");
    cin >> temp3;
}

// Function to calculate lowest, highest, and average temperatures
void calculateTemperatures(double temp1, double temp2, double temp3, double& lowestTemp, double& highestTemp, double& averageTemp) {
    lowestTemp = min(min(temp1, temp2), temp3);
    highestTemp = max(max(temp1, temp2), temp3);
    averageTemp = (temp1 + temp2 + temp3) / 3.0;
}

// Function to display results
void displayResults(double lowestTemp, double highestTemp, double averageTemp) {
    cout << "\nLowest Temperature: " << lowestTemp << " degrees\n";
    cout << "Highest Temperature: " << highestTemp << " degrees\n";
    cout << "Average Temperature: " << averageTemp << " degrees\n";
}

int main() {
    // Declare variables to store temperatures
    double temp1, temp2, temp3;

    // gets temperatures from the userp
    inputTemperatures(temp1, temp2, temp3);

    //uses input-temps to calculate temperatures
    double lowestTemp, highestTemp, averageTemp;
    calculateTemperatures(temp1, temp2, temp3, lowestTemp, highestTemp, averageTemp);

    // Display results
    displayResults(lowestTemp, highestTemp, averageTemp);

    return 0;
}
