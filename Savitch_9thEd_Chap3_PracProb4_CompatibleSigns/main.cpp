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
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string sign1, sign2; 
    //Initialize or input i.e. set variable values
    cout << "Horoscope Program which examines compatible signs.\n" << "Input 2 signs.\n";
    cin >> sign1 >> sign2;
    if (sign1=="Aries"){
        if (sign2=="Leo"||sign2=="Sagittarius"){
            cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Leo"){
        if (sign2=="Aries"||sign2=="Sagittarius"){
            cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Sagittarius"){
        if (sign2=="Leo"||sign2=="Aries"){
            cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Taurus"){
        if (sign2=="Virgo"||sign2=="Capricorn"){
            cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
     if (sign1== "Virgo"){
        if (sign2=="Taurus"||sign2=="Capricorn"){
            cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Capricorn"){
        if (sign2=="Taurus"||sign2=="Virgo"){
            cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Gemini"){
        if (sign2=="Aquarius"||sign2=="Libra"){
            cout << sign1 << " and " << sign2 << " are compatible Air signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Aquarius"){
        if (sign2=="Gemini"||sign2=="Libra"){
            cout << sign1 << " and " << sign2 << " are compatible Air signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Libra"){
        if (sign2=="Aquarius"||sign2=="Gemini"){
            cout << sign1 << " and " << sign2 << " are compatible Air signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Cancer"){
        if (sign2=="Scorpio"||sign2=="Pisces"){
            cout << sign1 << " and " << sign2 << " are compatible Water signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Scorpio"){
        if (sign2=="Cancer"||sign2=="Pisces"){
            cout << sign1 << " and " << sign2 << " are compatible Water signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    if (sign1== "Pisces"){
        if (sign2=="Scorpio"||sign2=="Cancer"){
            cout << sign1 << " and " << sign2 << " are compatible Water signs.";
        }
        else {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}