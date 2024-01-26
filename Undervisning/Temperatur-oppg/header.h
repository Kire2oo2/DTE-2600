#ifndef HEADER_H
#define HEADER_H
#include <vector>

class TemperatureCalculator {
public:
    // Function to get temperatures from the user
    void inputTemperatures();

    // Functions to calculate lowest, highest, and average temperatures
    void calculateLow();
    void calculateHigh();
    void calculateAvg();

    // Function to display results
    void displayResults() const;

private:
    std::vector<double> temperatures;
    double lowestTemp, highestTemp, averageTemp;
};

#endif // HEADER_H
