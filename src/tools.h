#ifndef TOOLS_H
#define TOOLS_H

#include <vector>
#include <cmath>
#include <string>
#include <iostream>

struct dataPoint {
    double x;
    double y;
    double sigma;
};

double average(const std::vector<dataPoint>& values);
double standDev(const std::vector<dataPoint>& values);

#endif // TOOLS_H