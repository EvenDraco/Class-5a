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
    char user1, user2;
    string msg;
    //Declare Variables
    cin>>user1>>user2;
    user1-=user1>=97?32:0;
    user2-=user2>=97?32:0;
    msg = "Nothing";
    
    //Initialize or input i.e. set variable values
    msg=user1==user2?"Nobody wins.":msg;
    if(user1=='R'){
        if (user2 =='P')    msg="Paper covers rock.";
        if (user2=='S')     msg="Rock breaks scissors.";
    }else if(user1== 'P'){
        if (user2== 'R')    msg="Paper covers rock.";
        if (user2== 'S')    msg="Scissors cuts paper.";
    }else if (user1=='S'){
        if (user2=='R')     msg="Rock breaks scissors.";
        if (user2== 'P')    msg="Scissors cuts paper.";
        }
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Rock Paper Scissors Game\n" << "Input Player 1 and Player 2 Choices\n";
    cout << msg;
    //Exit stage right or left!
    return 0;
}