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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float hswrth, insure;
    //Initialize or input i.e. set variable values
    hswrth = 0;
    //Map inputs -> outputs
    cin >> hswrth;
    insure = (8e-1f) * hswrth;
    //Display the outputs
    cout << "Insurance Calculator\n" << "How much is your house worth?\n" << 
    "You need $" << insure << " of insurance."; 
    //Exit stage right or left!
    return 0;
}