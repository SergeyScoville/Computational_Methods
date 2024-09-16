# Homework1 Project

## Overview

This project is a C++ program that processes data from a specified file, calculates the average and standard deviation of `y` values, and displays these statistics. It also has the functionality to plot data, specifically the data stored in the `asst1-1.txt` file, or any file structured the same. The project is built using CMake.

## Building the Project

To build the project, follow these steps:

1. **Get the project:**

   You first need to get the code and project. Naviage to a directory you want to put the project and then run:

   ```bash
   git clone https://github.com/SergeyScoville/Computational_Methods_Homework1.git

2. **Navigate to the `build` Directory:**

   First, ensure that you are in the root directory of the project. Then, create or navigate to the `build` directory:

   ```bash
   mkdir -p build
   cd build

3. **Run CMake:**

   In the `build` directory, generate the build system files using CMake:

   ```bash
   cmake ..

4. **Compile the Project:**

   After running CMake, compile the project using `make`:

   ```bash
   make

## Running the Program

After building the project, run the executable:

```bash
./Homework1
```

## Input Data File

When the program runs, you will be prompted to enter the name of the data file you want to use. For example, for the data file located in the `data` directory within the project folder, you can enter:

```bash
../data/asst1-1.dat
```

This will instruct the program to load the data from `asst1-1.dat` in the `data` directory.

## Example

Here is how you would run the program step by step:

```bash
cmake ..
make
./Homework1
```
When prompted:
```plaintext
Please enter the name of the data file you want to use: ../data/asst1-1.dat
```
The program will then read the data from the specified file, perform the calculations, and display the results.

The PlottingHomework1 executable is run in the same method and will also prompt you for an input file which you can do in the same method as before, only with files with a `.txt` extension though.

