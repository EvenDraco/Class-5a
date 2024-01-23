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
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char option,//Option to choose from menu
         nOpt;//Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpt='8';//In this case we have 8 options
    do{
        //Display user choice
        cout << "This is an example menu program\n";
        cout << "Choose from the options displayed\n";
        cout << "1 -> Question 1"<<endl;
        cout<<"2 -> Question 2"<<endl;
        cout<<"3 -> Question 3"<<endl;
        cout<<"etc....."<<endl;
        cin>>option;//Read in the option
        
        //Use a switch case to implement
        switch(option){
            case '1':{
                int bksPrch;
                    cout << "Book Worm Points\n" << "Input the number of books purchased this month.\n";
                    cin >> bksPrch;
                        if(bksPrch<=0){ 
                        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
                        "Points earned   =  0";
                        }
                        if(bksPrch==1){ 
                        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
                        "Points earned   =  5";
                        }
                        if(bksPrch==2){ 
                        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
                        "Points earned   = 15";
                        }
                        if(bksPrch==3){ 
                        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
                        "Points earned   = 30";
                        }
                        if(bksPrch>=4){ 
                        cout << "Books purchased =" << setw(3) << bksPrch << endl <<
                        "Points earned   = 60";
                        }
                        cout<<endl<<endl;}break;
            case '2':{
                float bal, chcks, chckfee, lowbal;
                lowbal = 0;
                chckfee = 0;
                cout << "Monthly Bank Fees\n" << "Input Current Bank Balance and Number of Checks\n";
                cin >> bal >> chcks;

                if (chcks < 0){
                    cout << "ACCOUNT IS OVERDRAWN";
                }
                cout << fixed << setprecision(2);
                cout << "Balance     $" << setw(9) << bal << endl;
                if (chcks >=60){
                    cout << "Check Fee   $" << setw(9) << chcks*.04 << endl;
                    chckfee = chcks*.04;
                } 
                else if (chcks >=40 && chcks <=59){
                    cout << "Check Fee   $" << setw(9) << chcks*.06 << endl;
                    chckfee = chcks*.06;
                }
                else if (chcks >=20 && chcks <=39){
                    cout << "Check Fee   $" << setw(9) << chcks*.08 << endl;
                    chckfee = chcks*.08;
                }
                else if (chcks < 20 && chcks >= 0){
                    cout << "Check Fee   $" << setw(9) << chcks*.10 << endl;
                    chckfee = chcks*.10;
                }
                cout << "Monthly Fee $" << setw(9) << 10.00 << endl;
                if (bal<=399){
                    lowbal = 15.00;
                    cout << "Low Balance $" << setw(9) << lowbal << endl;
                }
                else {
                    cout << "Low Balance $" << setw(9) << lowbal << endl;
                }
                cout << "New Balance $" << setw(9) << bal - chckfee - 10 - lowbal
                     <<endl<<endl;}break;
            case '3':{
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
                cout << endl << endl;}break;
            case '4':{
                char pack;
                unsigned short hours;
                //Initialize or input i.e. set variable values
                hours = 0;
                //Map inputs -> outputs
                cout << "ISP Bill\n"<<"Input Package and Hours\n";
                cin >> pack >> hours;
                pack-=pack>=97?32:0;
                if (hours>743||hours<0){
                    cout << "Invalid Hours.";
                }
                else {
                    if (pack>67||pack<65){
                        cout << "Invalid Pack.";
                    }
                    else if    (pack=='A'){
                    cout << fixed << setprecision(2);
                    cout << "Bill = $ " << (((hours-10)*2.00) + 9.95);
                }
                else if (pack=='B'){
                    if(hours>20){ 
                    cout << fixed << setprecision(2);
                    cout << "Bill = $ " << (((hours-20)*1.00) + 14.95);
                    }
                    else { 
                    cout << fixed << setprecision(2);
                    cout << "Bill = $ " << 14.95;
                }

                }
                else if (pack=='C'){
                    cout << fixed << setprecision(2);
                    cout << "Bill = $ " << 19.95;
                }}
                cout <<endl<<endl;}
                break;
               case '5':{
                string nameOne, nameTwo, nameThr;
                //Initialize or input i.e. set variable values
                cout << "Sorting Names\n" << "Input 3 names\n";
                cin >> nameOne >> nameTwo >> nameThr;

                //Map inputs -> outputs
                if (nameOne > nameTwo){
                    string temp=nameOne;
                    nameOne=nameTwo;
                    nameTwo=temp;}

                if (nameTwo > nameThr){
                    string temp=nameTwo;
                    nameTwo=nameThr;
                    nameThr=temp;}
                if (nameTwo > nameThr){
                    string temp=nameOne;
                    nameOne=nameTwo;
                    nameTwo=temp;}
                //Display the outputs
                cout << nameOne << endl << nameTwo << endl << nameThr;
                cout <<endl <<endl;}break;
            case '6':{
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
                cout << msg << endl <<endl;}break;
            case '7':{
                string sign1, sign2;
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
                cout<<endl<<endl;}break;
            case '8':{
                unsigned char n1,
                n10,
                n100,
                n1000;
                unsigned short x;
                string year;

                //Initialize or input i.e. set variable values
                //Map inputs -> outputs
                cout << "Arabic to Roman numeral conversion.\n" << "Input the integer to convert.\n";
                cin >> x;

                if (x<1000 || x>3000) {year = " is Out of Range!";}
                else{ 
                n1      =(x)%10;
                n10     =(x/10)%10;
                n100    =(x/100)%10;
                n1000   =(x/1000);

                switch(n1000){
                case 3: year+="M";
                case 2: year+="M";
                case 1: year+="M";
                };
                year  +=n100==9?"CM":
                  n100==8?"DCCC":
                  n100==7?"DCC":
                  n100==6?"DC":
                  n100==5?"D":
                  n100==4?"CD":
                  n100==3?"CCC":
                  n100==2?"CC":
                  n100==1?"C": "" ;
                if(n10==9)year+="XC";
                if(n10==8)year+="LXXX";
                if(n10==7)year+="LXX";
                if(n10==6)year+="LX";
                if(n10==5)year+="L";
                if(n10==4)year+="XL";
                if(n10==3)year+="XXX";
                if(n10==2)year+="XX";
                if(n10==1)year+="X";

                if(n1==9)year+="IX";
                else if(n1==8)year+="VIII";
                else if(n1==7)year+="VII";
                else if(n1==6)year+="VI";
                else if(n1==5)year+="V";
                else if(n1==4)year+="IV";
                else if(n1==3)year+="IIII";
                else if(n1==2)year+="II";
                else if(n1==1)year+="I";

                year= " is equal to " + year;
                }
                //Display the outputs
                cout << x << year;
                cout<<endl<<endl;}
            break;
            default : cout<<endl<<"9 to Exit Program"<<endl<<endl;break;
        }
    }while(option<=nOpt);
    
    //Exit the Program
    return 0;
}
