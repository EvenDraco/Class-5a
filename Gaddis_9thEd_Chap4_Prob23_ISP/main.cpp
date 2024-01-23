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
    char pack;
    unsigned short hours;
    //Initialize or input i.e. set variable values
    hours = 0;
    //Map inputs -> outputs
    cout << "ISP Bill\n"<<"Input Package and Hours\n";
    cin >> pack >> hours;
    pack-=pack>=97?32:0;
    if (hours>743||hours<0){
        cout << "Invalid Hours.";
    }
    else {
        if (pack>67||pack<65){
            cout << "Invalid Pack.";
        }
        else if    (pack=='A'){
        cout << fixed << setprecision(2);
        cout << "Bill = $ " << (((hours-10)*2.00) + 9.95);
    }
    else if (pack=='B'){
        if(hours>20){ 
        cout << fixed << setprecision(2);
        cout << "Bill = $ " << (((hours-20)*1.00) + 14.95);
        }
        else { 
        cout << fixed << setprecision(2);
        cout << "Bill = $ " << 14.95;
    }
    
    }
    else if (pack=='C'){
        cout << fixed << setprecision(2);
        cout << "Bill = $ " << 19.95;
    }}
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
