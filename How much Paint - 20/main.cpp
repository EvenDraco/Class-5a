//system Libs
#include <iostream>
#include <cmath>
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {
    //set random seed
    
    //declare all var.
    int fenceH; // Fence height
    int fenceL; // Fence length
    int covPG; // coverage per gallon
    int numOL = 2; // number of layers 
    
    //int all Variables
    
    fenceH = 6;
    fenceL = 100;
    covPG = 340;
            
    // Calculate the total area to be painted
    int totArea = numOL * fenceH * fenceL;
    
    //process or map solutions
    
    // Calculate the total gallons needed
    int totGals = (totArea + covPG - 1) / covPG;
    
    //display output
    
    std::cout << "Total gallons needed for two layers on a 6-foot high 100-foot long fence: " << totGals << std::endl;
    
    //exit program
    return 0;
}
