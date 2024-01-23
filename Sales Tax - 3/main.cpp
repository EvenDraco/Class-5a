//system Libs
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {
    
    float stTax(.04);           // state tax
    float coTax(.02);           // county tax
    float purchas(95.00);       // purchase
    float total;
    
    total = (purchas * stTax)+(purchas * coTax);
    
    cout << "The total price of total sales tax on a $95 purchase with a 4% " <<
            "state tax and a county tax of 2% is $" << fixed << 
            setprecision(2) << total << endl;    
    
    return 0;
}
