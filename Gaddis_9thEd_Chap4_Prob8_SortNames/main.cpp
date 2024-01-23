/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 *Student : Evelynn Draconis
 *Date    : 1/10/2024
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
    string name1, name2, name3;
    //Initialize or input i.e. set variable values
    cout << "Sorting Names\n" << "Input 3 names\n";
    cin >> name1 >> name2 >> name3;
    
    //Map inputs -> outputs
    if (name1 > name2){
        string temp=name1;
        name1=name2;
        name2=temp;}
        
    if (name2 > name3){
        string temp=name2;
        name2=name3;
        name3=temp;}
    if (name1 > name2){
        string temp=name1;
        name1=name2;
        name2=temp;}
    //Display the outputs
    cout << name1 << endl << name2 << endl << name3;
    //Exit stage right or left!
    return 0;
}