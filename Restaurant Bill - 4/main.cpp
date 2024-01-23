//system Libs
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {

    float billAmt(88.67);                        //Bill amount
    float tax(.0675);
    float tip(.2);
    float billPT(billAmt * tax);                 // Bill plus Tax
    float billATT( (billAmt + billPT) * tip);    // Bill and tax and tip
    float total(billAmt + billPT + billATT);
    
    cout << "Meal cost : $" << billAmt << endl;
    cout << "Tax on meal : $" << fixed << setprecision(2) << billPT << endl;
    cout << "A 20% tip for meal and the Tax : $" << fixed << setprecision(2) << billATT << endl;
    cout << "Total balance due : $" << 
            fixed << setprecision(2) <<total << endl;
    
    return 0;
}
