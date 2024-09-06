#include "tools.h"

// This function takes in a vector of dataPoint structures and calculate the average of specifically the y values
double average(const std::vector<dataPoint>& values) {
    double sum = 0.0;
    for (dataPoint val : values) {
        sum += val.y;
    }
    return sum / values.size();
}

// This function takes in a vector of dataPoint structures and calculates the standard deviation of specifically the y values. This function also uses the average function.
double standDev(const std::vector<dataPoint>& values) {
    double sigmaSquared = 0.0;
    double yAvg = average(values);
    int numberValues = values.size();

    for (int entry = 0; entry < numberValues; entry++) {
    sigmaSquared += pow((values[entry].y - yAvg), 2);
    }
    return std::sqrt(sigmaSquared / (numberValues));
}
