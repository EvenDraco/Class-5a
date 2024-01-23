/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 *Student : Evelynn Draconis
 *Date    : 1/8/2024
 */

//System Libraries
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
    float cal, cookate, serving;
    //Initialize or input i.e. set variable values
    // total number of cookies in bag
    cal = 300;      // number of calories per 4 cookies ate
    cookate = 0;      // cookies ate is waiting for input from User
    serving = 4;      // 4 cookies per serving 40 devided by 10 = 4
    //Map inputs -> outputs
    cin >> cookate ;
    //Display the outputs
    cout << "Calorie Counter\n" << "How many cookies did you eat?\n" << "You consumed " << (cal/serving) * cookate << " calories.";
    //Exit stage right or left!
    return 0;
}