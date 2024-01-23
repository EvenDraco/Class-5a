// Evelynn Draconis
// 1/08/2024
//system Libs
#include <iostream>
#include <iomanip>
using namespace std;


//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {
    //set Rand Seed
    
    //declare all Var. Less than 7 char.
     float milBdgt,fedBdgt,mlPrcnt;

    //initialize all Var.
     milBdgt=7.05e11f;    //Military Budget = 700 Billion   

     fedBdgt=6.8e12f;    //Federal Budget  = 4.1 Trillion
                
    //process or map solutions
    mlPrcnt = milBdgt/fedBdgt;
    //display output
    cout << "The percentage the U.S.A. government spent on the military in 2021 is approximately " <<
            fixed << setprecision(2)<<mlPrcnt*100 << "%." << endl; 
    //exit program

    return 0;
}
