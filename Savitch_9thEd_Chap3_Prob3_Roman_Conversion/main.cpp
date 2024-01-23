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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned char n1,
                n10,
                n100,
                n1000;
    unsigned short x;
    string msg;
    
    //Initialize or input i.e. set variable values
    //Map inputs -> outputs
    cout << "Arabic to Roman numeral conversion.\n" << "Input the integer to convert.\n";
    cin >> x;
    
    if (x<1000 || x>3000) {msg = " is Out of Range!";}
    else{ 
        n1      =(x)%10;
        n10     =(x/10)%10;
        n100    =(x/100)%10;
        n1000   =(x/1000);
    cout << n1 << " " << n10 << " " << n100 << " "<< n1000;    
            switch(n1000){
                case 3: msg+="M";
                case 2: msg+="M";
                case 1: msg+="M";
                };
            msg  +=n100==9?"CM":
                  n100==8?"DCCC":
                  n100==7?"DCC":
                  n100==6?"DC":
                  n100==5?"D":
                  n100==4?"CD":
                  n100==3?"CCC":
                  n100==2?"CC":
                  n100==1?"C": "" ;
            if(n10==9)msg+="XC";
            if(n10==8)msg+="LXXX";
            if(n10==7)msg+="LXX";
            if(n10==6)msg+="LX";
            if(n10==5)msg+="L";
            if(n10==4)msg+="XL";
            if(n10==3)msg+="XXX";
            if(n10==2)msg+="XX";
            if(n10==1)msg+="X";
            
            if(n1==9)msg+="IX";
            else if(n1==8)msg+="VIII";
            else if(n1==7)msg+="VII";
            else if(n1==6)msg+="VI";
            else if(n1==5)msg+="V";
            else if(n1==4)msg+="IV";
            else if(n1==3)msg+="IIII";
            else if(n1==2)msg+="II";
            else if(n1==1)msg+="I";
            
        msg= " is equal to " + msg;
    }
    //Display the outputs
    cout << x << msg ;
    //Exit stage right or left!
    return 0;
}