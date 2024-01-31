#ifndef HEADER_H
#define HEADER_H
#include <vector>

class TemperatureCalculator {
public:
    // Function to get temperatures from the user
    void inputTemperatures();

    // Functions to calculate lowest, highest, and average temperatures and difference between highest and lowest temperature
    void calculateLow();
    void calculateHigh();
    void calculateAvg();
    void calculateDiff();

    // Function to display results
    void displayResults() const;

private:
    std::vector<double> temperatures;
    double lowestTemp, highestTemp, averageTemp, differenceTemp;
};

#endif // HEADER_H
