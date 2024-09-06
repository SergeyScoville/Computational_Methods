#include <iostream>
#include <cstdlib>  // For system()
#include <string>   // For std::string

int main() {
    // Name of the existing data file
    std::string fileName = "asst1-1.txt";

    // Invoke gnuplot to plot the data
    std::string plotCommand = 
        "gnuplot -persist <<-EOFMarker\n"
        "set title \"y vs. x with Error Bars\"\n"
        "set xlabel \"x\"\n"
        "set ylabel \"y\"\n"
        "plot \"" + fileName + "\" using 1:2:3 with yerrorbars lt 1 lw 2 pt 7 ps 1.0 lc rgb 'blue' title \"Data\"\n"
		"EOFMarker\n";

    system(plotCommand.c_str());

    return 0;
}

