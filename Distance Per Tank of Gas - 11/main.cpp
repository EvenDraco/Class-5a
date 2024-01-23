//system Libs
#include <iostream>
using namespace std;

//user libraries

//global constants - Math, Physics, Chemistry, Conversions

//function prototypes

//program execution begins here

int main() {
    
   
    int cGT; // car gas tank
    float cAMPGIT; //Car Average miles per Gallon In Town
    float cAMPGOF; // car Average Miles per gallon on freeway
    float distIT; //distance in town
    float distOF; // distance on freeway
        
    cGT = 20;
    cAMPGIT = 23.5;
    cAMPGOF = 28.9;
    distIT = cGT * cAMPGIT;
    distOF = cGT * cAMPGOF;
    
    cout << "The average mileage for driving only in town is" << endl;
    cout << distIT << endl;
    cout << "The average mileage for driving only on the freeway is \n";
    cout << distOF<< endl;
          
    
    return 0;
}
