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
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float deg;
    int degx;
    //Initialize or input i.e. set variable values
    deg = 0.0;
    //Map inputs -> outputs
    cout << "Calculate trig functions\n" << "Input the angle in degrees.\n" ;
    cin >> deg;    
    degx = deg;
    //Display the outputs
    cout << fixed << setprecision(4);
    cout << "sin(" << degx <<") = " << sin(deg * M_PI / 180.0) << endl;
    cout << "cos(" << degx <<") = " << cos(deg * M_PI / 180.0) << endl;
    cout << "tan(" << degx <<") = " << tan(deg * M_PI / 180.0);
    //Exit stage right or left!
    return 0;
}