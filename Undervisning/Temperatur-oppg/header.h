#ifndef HEADER_H
#define HEADER_H

class TemperatureCalculator {
public:
    // Function to get temperatures from the user
    void inputTemperatures();

    // Function to calculate lowest, highest, and average temperatures
    void calculateTemperatures();

    // Function to display results
    void displayResults() const;

private:
    double temp1, temp2, temp3;
    double lowestTemp, highestTemp, averageTemp;
};

#endif // HEADER_H
