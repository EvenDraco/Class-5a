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
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions
const char DPS = 100;
//function prototypes

//program execution begins here

int main() {
    //set Rand Seed
    
    //declare all Var. Less than 7 char.
    int str1,str2,str3,str4,str5;
    //initialize all Var.
    cout << "Enter the value earned at each store in order\n";
    cin >> str1 >> str2 >> str3 >> str4 >> str5;
    if (str1<=0||str2<=0){
        cout << "Invalid amount entered";
    }
    else if (str3<=0||str4<=0){
        cout << "Invalid amount entered";
    }
    else if (str1<=0||str2<=0){
        cout << "Invalid amount entered";
    }
    else {
        cout << "Store 1:";
            for (int count = 1; count<=(str1/DPS);count++){
                cout << "*";
            }
        cout << endl << "Store 2:";
            for (int count = 1; count<=(str2/DPS);count++){
                cout << "*";
            }
        cout << endl << "Store 3:";
            for (int count = 1; count<=(str3/DPS);count++){
                cout << "*";
            }    
        cout << endl << "Store 4:";
            for (int count = 1; count<=(str4/DPS);count++){
                cout << "*";
            }    
        cout << endl << "Store 5:";
            for (int count = 1; count<=(str5/DPS);count++){
                cout << "*";
            }
        cout << endl;
    }
    //process or map solutions
    
    //display output
    
    //exit program

    return 0;
}
