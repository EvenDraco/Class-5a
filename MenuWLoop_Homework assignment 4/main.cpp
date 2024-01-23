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
#include <string>
#include <climits>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const unsigned char PPD =100;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char option,//Option to choose from menu
         nOpt;//Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpt='10';//In this case we have 10 options
    do{
        //Display user choice
        cout << "This is an example menu program\n";
        cout << "Choose from the options displayed\n";
        cout << "1 -> Question 1"<<endl;
        cout<<"2 -> Question 2"<<endl;
        cout<<"3 -> Question 3"<<endl;
        cout<<"etc...\n" << "11 and above -> Exit Program" <<endl;
        
        cin>>option;//Read in the option
        
        //Use a switch case to implement
        switch(option){
            case '1':{
                unsigned short num, valB;
                //Initialize or input i.e. set variable values
                valB=0;
                cout << "Gaddis_9thEd_Chap5_Prob1_Sum\n" << "Enter a positive number\n"; 
                cin >> num;
                if (num==1){
                    valB = 1;
                }
                else
                    for(unsigned short valA = 1; valA <= num; ++valA){
                    valB += valA;
                }
                cout <<"Sum = " << valB;}
                cout << endl << endl;break;
            
            case '2':{
                int days, totalC, cent;
                totalC = 1;
                cent = 1;
                days = 0;

                cin >> days;
                if (days == 1){
                    cout << "Pay = $" << .01;
                }
                else if (days>=2)
                {
                    for(int nDays=2;nDays<=days;nDays++){
                    cent*=2;//Double the pay each day
                    totalC += cent;

                    }
                    //dec = totalC % 100;
                    cout << fixed << setprecision(2);
                    cout << "Pay = $" << totalC/PPD << "." << (totalC%PPD<10?"0":"")<<totalC%PPD ;
                }
            }
                cout << endl << endl;break;
            
            case '3':{
                short num, smllNum, lrgNum, lastNum;
                //Initialize or input i.e. set variable values
                num=0;
                smllNum=SHRT_MAX;
                lrgNum=0;
                lastNum=-99;
                while (num!=lastNum){
                    cin >> num;
                    if (num<=smllNum&&num!=-99){
                        smllNum=num;
                    }
                    if (lrgNum<=num&&num!=-99){
                        lrgNum=num;
                    }
                }
                //Map inputs -> outputs

                //Display the outputs
                cout    << "Smallest number in the series is " << smllNum << endl
                        << "Largest  number in the series is " << lrgNum;
            }
                cout << endl << endl;break;
            
            case '4':{
                char letter;
                short number;
                cout << "Gaddis_9thEd_Chap5_Prob22_Rectangle\n" << "Please enter a number and then a letter\n";
                cin >> number >> letter;

                for (int count=2;count<=number;++count){
                    for (int count=1;count<=number;++count){
                        cout << letter;
                    } 
                    cout << endl;}
                for (int count=1;count<=number;++count){
                    cout << letter;

                }
                        }
                        cout << endl << endl;break;
            
            case '5':{short number;
    
                number = 0;
                cin >> number;

                for (int count1 = 1; count1 <= number ; ++count1){
                    for (int count2 = 1;count2<=count1; ++count2){
                        cout << "+";
                    }
                    cout << endl<<endl;
                }

                for (int count1 = number ; count1 >= 2; --count1){
                    for (int count2 = 1; count2 <= count1; ++count2){
                        cout << "+";
                    }
                    cout << endl<<endl;
                }

                cout << "+";}
                cout << endl << endl;break;
            
            case '6':{
                float gal, lTG;
                short liters, miles;
                //Initialize or input i.e. set variable values
                liters = 0;
                lTG = 26417.9e-5f;
                gal = 1/lTG;
                for (char cont='o';cont!='n';cin >> cont){
                    if (cont == 'y'){
                        cout << endl;
                    }
                    cout << "Enter number of liters of gasoline:\n" << endl <<"Enter number of miles traveled:\n" << endl;
                    cin >> liters >> miles;
                    cout << fixed << setprecision(2);
                    cout << "miles per gallon:\n" << miles/(liters/gal) << endl;
                    cout << "Again:\n";
                }
            }
                cout << endl << endl;break;
            
            case '7':{
                float liters1, liters2, gal, lTG, car1, car2;
                short  miles;
                //Initialize or input i.e. set variable values
                liters1=liters2=0;
                lTG = 26417.9e-5f;
                gal = 1/lTG;
                for (char cont='o';cont!='n';cin >> cont){
                    if (cont == 'y'){
                        cout << endl;
                    }
                    cout << "Car 1\n";
                    cout << "Enter number of liters of gasoline:\n"
                         <<"Enter number of miles traveled:\n";
                    cin >> liters1 >> miles;
                    cout << fixed << setprecision(2);
                    car1 = miles/(liters1/gal);
                    cout << "miles per gallon:" << setw(6)
                         << car1 << endl << endl;

                    cout << "Car 2\n";
                    cout << "Enter number of liters of gasoline:\n"
                         <<"Enter number of miles traveled:\n";
                    cin >> liters2 >> miles;
                    cout << fixed << setprecision(2);
                    car2 = miles/(liters2/gal);
                    cout << "miles per gallon:" << setw(6)
                         << car2 << endl <<endl;
                    car1>car2?
                        cout << "Car 1 is more fuel efficient\n" << endl:
                        cout << "Car 2 is more fuel efficient\n" << endl;
                    cout << "Again:\n";
                }            
            }
                cout << endl << endl;break;
            
            case '8':{
                float priceA, priceB, inf;
                
                priceA = priceB = 0.00;

                
                for (char cont = 'o'; cont != 'n'; cin >> cont){
                    if (cont == 'y'){
                        cout << endl;
                    }
                    cout << "Enter current price:\n" 
                         << "Enter year-ago price:\n";
                    cin  >> priceA >> priceB;
                    inf = ((priceA - priceB)/priceB)*100;
                    cout << fixed <<setprecision(2);
                    cout << "Inflation rate: " << inf << "%\n" << endl << "Again:\n";
                }
            }
                cout << endl << endl;break;
            
            case '9':{
                float priceA, priceB, price1, inf;

                priceA = priceB = 0.00;

                for (char cont = 'o'; cont != 'n'; cin >> cont){
                    if (cont == 'y'){
                        cout << endl;
                    }
                    cout << "Enter current price:\n" 
                         << "Enter year-ago price:\n";
                    cin  >> priceA >> priceB;
                    inf = ((priceA - priceB)/priceB)*100;
                    cout << fixed <<setprecision(2);
                    cout << "Inflation rate: " << inf << "%\n" << endl;
                    price1 = (priceA*(inf/100))+priceA;
                    cout << "Price in one year: $" << price1 << endl;
                    cout << "Price in two year: $" << (price1*(inf/100))+price1 << endl <<endl;
                    cout << "Again:\n";
                }
            }
                cout << endl << endl;break;
            
            case '10':{
                float x, y, z;
                
                cout << "Enter first number:\n" << endl
                     << "Enter Second number:\n" << endl
                     << "Enter third number:\n" << endl;
                cin >> x >> y >> z;
                    cout << fixed << setprecision(1);
                    x>y?
                        cout << "Largest number from two parameter function:\n" << x << endl:
                        cout << "Largest number from two parameter function:\n" << y << endl;
                    cout << endl;
                    if (x>y && x>z){
                        cout << "Largest number from three parameter function:\n" << x << endl;
                        }
                        else if (y>x && y>z){
                        cout << "Largest number from three parameter function:\n" << y << endl;
                    }
                    else if (z>x && z>y){
                        cout << "Largest number from three parameter function:\n" << z << endl;
                    }
            }
                cout << endl << endl;break;    
            
            default : cout<<endl<<"Exit Program"<<endl<<endl;break;
        }
    }while(option<=nOpt);
    
    //Exit the Program
    return 0;
}
