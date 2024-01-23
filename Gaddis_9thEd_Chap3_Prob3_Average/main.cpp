/*
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 *Student : Evelynn Draconis
 * Date : 1/8/24
 */

#include <iostream>  //Input/Output Library
#include <cmath>
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
    float testa, testb, testc, testd, teste, average;
    //Initialize or input i.e. set variable values
    cin >> testa >> testb >> testc >> testd >> teste;
    average = (testa + testb + testc + testd + teste)/5;
    //Map inputs -> outputs
    
    //Display the outputs
    cout << fixed << setprecision(1);
    cout << "Input 5 numbers to average."<< endl;
    cout << "The average = " << average;
    //Exit stage right or left!
    return 0;
}