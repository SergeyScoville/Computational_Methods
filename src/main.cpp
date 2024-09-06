/*
This is a short package that asks the user for an input data file, reads and stores the data in a vector of structures, specifically a dataPoint structure defined in tools.h. It then computes the average and standard deviation of the y values and returns them to the user.*/


#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
#include "tools.h"

int main() {
    std::string fileName;
    std::cout << "Please enter the name of the data file you want to use: ";
    std::cin >> fileName;

    std::ifstream infile(fileName);
    if (!infile) {
        std::cerr << "Problem opening file, please check you have the right file " << fileName << std::endl;
        return 1;
    }

    std::vector<dataPoint> data;
    dataPoint temporary;

    while (infile >> temporary.x >> temporary.y >> temporary.sigma) {
        data.push_back(temporary);
    }

    if (data.empty()) {
        std::cerr << "No data was read from the file." << std::endl;
        return 1;
    }

    infile.close();

    double avgY = average(data);
    double standDeviation = standDev(data);

    std::cout << "Average of y values: " << avgY << std::endl;
    std::cout << "Standard deviation of y values: " << standDeviation << std::endl;

    return 0;
}

