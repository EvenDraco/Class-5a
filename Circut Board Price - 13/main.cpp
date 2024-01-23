//system Libs
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {
    float perI;                 // percent increase
    float cirBP;                // circuit board price
    float cirBM;                // circuit Board Markup
    
    perI = .35;
    cirBP = 14.95;
    cirBM = (cirBP * perI) + cirBP; //circuit board price * percent increase
                                    // + circuit board price
    
    cout << "The circuit boards new price after the 35% increase would be: \n";
    cout << "$" << fixed << setprecision(2) << cirBM <<endl;
   
    return 0;
}
