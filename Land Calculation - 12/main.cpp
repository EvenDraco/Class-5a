//system Libs
#include <iostream>
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {
    
    int acreOL;         // acre of land
    int acreOLTS;       // acres of land to solve
    int total;          
    
    acreOL = 43560;
    acreOLTS = 391876;
    total = acreOLTS/acreOL;
    
    cout << "An Acre of land is equivalent to " << acreOL << "square feet." << endl;
    cout << "If we had " << acreOLTS << "square feet, that would give us approximately " <<
            total << " acres of land."<< endl;
    
    return 0;
}
