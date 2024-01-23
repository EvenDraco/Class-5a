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
    const float CK_CN_D = 1e-3f;                      //coke can decimal
    float curntWt, dsrdWt, msMass, msKill, mCokCn;  
    float CNVLBSG, wtKill, dsKill, ms1Can, nCans;
    
    //initialize Variables
    curntWt = 220;
    msMass = 35;
    msKill = 5;
    mCokCn = 350;
    CNVLBSG = 4.53592e2f;
    dsrdWt = 0;
    cout << "Program to calculate the limit of Soda Pop Consumption.\n" << "Input the desired dieters weight in lbs.\n";
    cin >> dsrdWt;
    //cout << "input from user is now " <<dsrdWt<< " for dsrdWt\n";
    wtKill = (msKill/msMass) * dsrdWt;
    //cout << "wtKill is valued at " << wtKill << endl;
    dsKill = wtKill * CNVLBSG;
    //cout << "dsKill is valued at " << dsKill << endl;
    ms1Can = mCokCn * CK_CN_D;
    //cout << "ms1Can is valued at " << ms1Can << endl;
    nCans = dsKill/ms1Can;
    //cout << "nCans is valued at "  << nCans <<endl;
    //Map inputs -> outputs
    
    //Display the outputs
    cout << fixed << setprecision(0);
    cout << "The maximum number of soda pop cans\n" << "which can be consumed is " << nCans-1 << " cans";
    //Exit stage right or left!
    return 0;
}