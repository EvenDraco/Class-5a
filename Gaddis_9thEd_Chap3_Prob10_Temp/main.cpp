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
    float cel, fer;    
    //Initialize or input i.e. set variable values
    fer = 0; 
        //Map inputs -> outputs
    cin >> fer;
    cel = 5.0 / 9 * (fer - 32);
    //Display the outputs
    cout << fixed << setprecision(1);
    cout << "Temperature Converter\n" << "Input Degrees Fahrenheit\n"  <<
    fer << " Degrees Fahrenheit = " << cel << " Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}