#include <iostream>
#include <cstdlib>  // For system()
#include <string>   // For std::string

int main() {
    // Name of the existing data file
    std::string fileName;
    std::cout << "Please enter the name of the data file you want to plot: ";
    std::cin >> fileName;

    // Invoke gnuplot to plot the data
    std::string plotCommand = 
        "gnuplot -persist <<-EOFMarker\n"
        "set title \"y as a function of x\" font \",18\"\n"
        "set xlabel \"x\"\n"
        "set ylabel \"y\"\n"
        "set grid xtics ytics mxtics mytics lw 1 lt 0 lc rgb \"gray\"\n"
        "set terminal qt font 'Arial,12'\n"
        "plot \"" + fileName + "\" using 1:2:3 with yerrorbars lt 1 lw 2 pt 7 ps 1.0 lc rgb 'blue' title \"Data\"\n"
		"EOFMarker\n";

    system(plotCommand.c_str());

    return 0;
}

