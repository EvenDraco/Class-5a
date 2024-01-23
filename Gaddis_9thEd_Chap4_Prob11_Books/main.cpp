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
int main() {
    //Set the random number seed
    
    //Declare Variables
    int bksPrch;
    //Initialize or input i.e. set variable values
    cout << "Book Worm Points\n" << "Input the number of books purchased this month.\n";
    cin >> bksPrch;
    //Map inputs -> outputs
    if(bksPrch<=0){ 
        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
        "Points earned   =  0";
    }
    if(bksPrch==1){ 
        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
        "Points earned   =  5";
    }
    if(bksPrch==2){ 
        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
        "Points earned   = 15";
    }
    if(bksPrch==3){ 
        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
        "Points earned   = 30";
    }
    if(bksPrch>=4){ 
        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
        "Points earned   = 60";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}