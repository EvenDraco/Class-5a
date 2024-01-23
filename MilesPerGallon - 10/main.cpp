//system Libs
#include <iostream>
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {

    int gasTank;
    int mileTR;         // miles till refill
    int mpg;            // miles per gallon
    
    gasTank = 15;
    mileTR = 375;
    mpg = mileTR/gasTank;
    
    cout << "If your tank holds 15 gallons of petrol and you can drive 375 miles" <<
            " till empty, your miles per gallon is: \n" << mpg << " Miles per Gallon" << endl;
    return 0;
}
