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
    float bal, chcks, chckfee, lowbal;
    
    //Initialize or input i.e. set variable values
    lowbal = 0;
    chckfee = 0;
    cout << "Monthly Bank Fees\n" << "Input Current Bank Balance and Number of Checks\n";
    cin >> bal >> chcks;
    //Map inputs -> outputs
    if (chcks < 0){
        cout << "ACCOUNT IS OVERDRAWN";
    }
    
    //Display the outputs
    cout << fixed << setprecision(2);
    cout << "Balance     $" << setw(9) << bal << endl;
    if (chcks >=60){
        cout << "Check Fee   $" << setw(9) << chcks*.04 << endl;
        chckfee = chcks*.04;
    } 
    else if (chcks >=40 && chcks <=59){
        cout << "Check Fee   $" << setw(9) << chcks*.06 << endl;
        chckfee = chcks*.06;
    }
    else if (chcks >=20 && chcks <=39){
        cout << "Check Fee   $" << setw(9) << chcks*.08 << endl;
        chckfee = chcks*.08;
    }
    else if (chcks < 20 && chcks >= 0){
        cout << "Check Fee   $" << setw(9) << chcks*.10 << endl;
        chckfee = chcks*.10;
    }
    cout << "Monthly Fee $" << setw(9) << 10.00 << endl;
    if (bal<=399){
        lowbal = 15.00;
        cout << "Low Balance $" << setw(9) << lowbal << endl;
    }
    else {
        cout << "Low Balance $" << setw(9) << lowbal << endl;
    }
    cout << "New Balance $" << setw(9) << bal - chckfee - 10 - lowbal;
    //Exit stage right or left!
    return 0;
}