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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int max, numopep;
    //Initialize or input i.e. set variable values
    max = 0;
    numopep = 0;
    
    //Map inputs -> outputs
    cout << "Input the maximum room capacity and the number of people\n";
    cin >> max >> numopep;
    //Display the outputs
    if (numopep<max){
        cout << "Meeting can be held.\n" << "Increase number of people by " << (max - numopep) << " will be allowed without violation.";
    }
    else {
        cout << "Meeting cannot be held.\n" << "Reduce number of people by " << (numopep - max) << " to avoid fire violation.";
    }
    //Exit stage right or left!
    return 0;
}
