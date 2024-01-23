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
    bool x,y;
    //initialize all Var.
    cout << "    X    "
         << "    Y    "
         << "   !X    "
         << "   !Y    "
         << "   X&&Y  "
         << "   X||Y  "
         << "   X^Y   "
         << "  X^Y^Y  "
         << "  X^Y^X  "
         << " !(X&&Y) "
         << " !X||!Y  "
         << " !(X||Y) "
         << " !X&&!Y  "<<endl;
                
    //process or map solutions
    x=y=true;
    //row 1
    cout <<"    "
         <<(x?'T':'F')<<"        "
         <<(y?'T':'F')<<"        "   
         <<(!x?'T':'F')<<"        "
         <<(!y?'T':'F')<<"        "
         <<(x&&y?'T':'F')<< "        "
         <<(x||y?'T':'F')<< "        "
         <<(x^y?'T':'F')<< "        "
         <<(x^y^y?'T':'F')<< "        "
         <<(x^y^x?'T':'F')<< "        "
         <<(!(x&&y)?'T':'F')<< "        "
         <<(!x||!y?'T':'F')<< "        "
         <<(!(x||y)?'T':'F')<< "        "
         <<(!x&&!y?'T':'F')<<endl;
    
    //row 2
    y=false;
    cout <<"    "
         <<(x?'T':'F')<<"        "
         <<(y?'T':'F')<<"        "   
         <<(!x?'T':'F')<<"        "
         <<(!y?'T':'F')<<"        "
         <<(x&&y?'T':'F')<< "        "
         <<(x||y?'T':'F')<< "        "
         <<(x^y?'T':'F')<< "        "
         <<(x^y^y?'T':'F')<< "        "
         <<(x^y^x?'T':'F')<< "        "
         <<(!(x&&y)?'T':'F')<< "        "
         <<(!x||!y?'T':'F')<< "        "
         <<(!(x||y)?'T':'F')<< "        "
         <<(!x&&!y?'T':'F')<<endl;
    
    //row 3
    x=false;
    y=true;
    cout <<"    "
         <<(x?'T':'F')<<"        "
         <<(y?'T':'F')<<"        "   
         <<(!x?'T':'F')<<"        "
         <<(!y?'T':'F')<<"        "
         <<(x&&y?'T':'F')<< "        "
         <<(x||y?'T':'F')<< "        "
         <<(x^y?'T':'F')<< "        "
         <<(x^y^y?'T':'F')<< "        "
         <<(x^y^x?'T':'F')<< "        "
         <<(!(x&&y)?'T':'F')<< "        "
         <<(!x||!y?'T':'F')<< "        "
         <<(!(x||y)?'T':'F')<< "        "
         <<(!x&&!y?'T':'F')<<endl;
    
    //row 4
    y=false;
    cout <<"    "
         <<(x?'T':'F')<<"        "
         <<(y?'T':'F')<<"        "   
         <<(!x?'T':'F')<<"        "
         <<(!y?'T':'F')<<"        "
         <<(x&&y?'T':'F')<< "        "
         <<(x||y?'T':'F')<< "        "
         <<(x^y?'T':'F')<< "        "
         <<(x^y^y?'T':'F')<< "        "
         <<(x^y^x?'T':'F')<< "        "
         <<(!(x&&y)?'T':'F')<< "        "
         <<(!x||!y?'T':'F')<< "        "
         <<(!(x||y)?'T':'F')<< "        "
         <<(!x&&!y?'T':'F')<<endl;
    //exit program

    return 0;
}
