/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 *Student : Evelynn Draconis
 *Date    : 1/9/2024
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
    float pInRtr, annSal;
    //Initialize or input i.e. set variable values
    pInRtr = 7.6e-2f;
    annSal = 0.0;
    //Map inputs -> outputs
    cout << "Input previous annual salary.\n";
    cin >> annSal;
    //Display the outputs
    cout << fixed << setprecision(2);
    cout << "Retroactive pay    = " << "$" << setw(7) << ((annSal/2)*pInRtr) << endl;
    cout << "New annual salary  = " << "$" << setw(7) << ((annSal*pInRtr)+annSal) << endl;
    cout << "New monthly salary = " << "$" << setw(7) << ((annSal*pInRtr)+annSal)/12;
    //Exit stage right or left!
    return 0;
}