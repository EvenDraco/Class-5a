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
#include <iostream>//Input/Output Library
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
    int numA, numB, numC, numD, numE, numF, numG, numH, numI, numJ;
    int pos, neg;
    //Initialize or input i.e. set variable values
    numA = 0;
    numB = 0;
    numC = 0;
    numD = 0;
    numE = 0;
    numF = 0;
    numG = 0;
    numH = 0;
    numI = 0;
    numJ = 0;
    pos = 0;
    neg = 0;
    //Map inputs -> outputs
    cout << "Input 10 numbers, any order, positive or negative\n";
    cin >> numA >> numB >> numC >> numD >> numE >> numF >> numG >> numH >> numI >> numJ;
    numA = numA>0?
        pos = numA+pos:
        neg = numA+neg;
    numB = numB>0?
        pos = numB+pos:
        neg = numB+neg;   
    numC = numC>0?
        pos = numC+pos:
        neg = numC+neg;
    numD = numD>0?
        pos = numD+pos:
        neg = numD+neg;
    numE = numE>0?
        pos = numE+pos:
        neg = numE+neg;
    numF = numF>0?
        pos = numF+pos:
        neg = numF+neg;
    numG = numG>0?
        pos = numG+pos:
        neg = numG+neg;
    numH = numH>0?
        pos = numH+pos:
        neg = numH+neg;
    numI = numI>0?
        pos = numI+pos:
        neg = numI+neg;
    numJ = numJ>0?
        pos = numJ+pos:
        neg = numJ+neg;
    //Display the outputs
    cout << "Negative sum =" << setw(4) << neg <<endl <<
    "Positive sum =" << setw(4) << pos <<endl <<
    "Total sum    =" << setw(4) << pos+neg;
    //Exit stage right or left!
    return 0;
}