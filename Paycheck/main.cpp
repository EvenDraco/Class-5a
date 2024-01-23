/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 *Student : Evelynn Draconis
 *Date    : 1/8/2024
 */

//system Libs
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int hrs, dph;
    float pystb;
    //Initialize or input i.e. set variable values
    dph = 0.0; //dollars per hour
    hrs = 0.0; // hours worked
    //Map inputs -> outputs
    cout << "This program calculates the gross paycheck.\n" <<
    "Input the pay rate in $'s/hr and the number of hours.\n";
    cin >> dph >> hrs;
    //cout << "dollars per hour is : $"<< dph << " Hours worked is : " << hrs << endl;
    if (hrs <= 40.0) {
        pystb = hrs * dph; // Pay for hours less than or equal to 40
    }
    else {
        pystb = (40 * dph) + ((hrs - 40) * 2 * dph); // Pay for the first 40 hours at regular rate
    }
    
     // Display the outputs
    cout << fixed << setprecision(2);
    cout << "Paycheck = $" << setw(7)<< pystb;
    
    //Exit stage right or left!
    return 0;
}