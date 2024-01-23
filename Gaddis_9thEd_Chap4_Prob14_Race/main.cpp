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
    string name1, name2, name3;
    int time1, time2, time3;
    //Initialize or input i.e. set variable values
    cout << "Race Ranking Program\n" << "Input 3 Runners\n" <<
    "Their names, then their times\n";
    cin >> name1 >> time1;
    cin >> name2 >> time2;
    cin >> name3 >> time3;
    //Map inputs -> outputs
    if (time1 < time2){
        int temp1 = time1;
        time1=time2;
        time2=temp1;
        string temp = name1;
        name1 = name2;
        name2=temp;
    }
    if (time2 < time3){
        int temp1 = time2;
        time2=time3;
        time3=temp1;
        string temp = name2;
        name2 = name3;
        name3=temp;
    }
    if (time1 < time2){
        int temp1 = time1;
        time1=time2;
        time2=temp1;
        string temp = name1;
        name1 = name2;
        name2=temp;
    }
    cout << name3 << "\t" << setw(3) << time3 << endl;
    cout << name2 << "\t" << setw(3) << time2 << endl;
    cout << name1 << "\t" << setw(3) << time1;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}