/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 5nd, 2018, 11:45PM 
 * Purpose:  Poker Dice Project 
 */

//System Libraries Here
#include <iostream>  //Input/Output Library
#include <ctime>     //Time Library
#include <cstdlib>   //Random number Library
#include <iomanip>   //Formatting Library
#include <cstring>   //Strin Library
#include <cmath>     //Math Library
#include <fstream>   //File Stream Operator
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

string getDie(int);  //random string generator for Sides of Die


//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the random number function
    srand(static_cast<unsigned int>(time(0)));
    

    //Test out the Dice Shuffle and pick 5 unique Die & Declare variables
    string Die1,Die2,Die3,Die4,Die5;    //String names for Die
    float nHands=1;                       //Number of tosses
    int NumOF1s = 0, NumOF2s = 0, 
        NumOF3s = 0, NumOF4s = 0, NumOF5s = 0, NumOF6s = 0;
    bool TwoOAK = false;
    bool ThreeOAK = false;
    bool FourOAK = false;
    bool FiveOAK = false;
    bool TwoPairs = false; 
    bool Str8 = false;
    bool FullH = false;
    bool re1 = false;
    bool re2 = false;
    bool re3 = false;
    bool re4 = false;
    bool re5 = false;
    bool Dice21 = false, Dice22 = false, Dice23 = false, Dice24 = false, Dice25 = false, Dice26 = false;
    char choice1,choice2,choice3,choice4,choice5;
    
    //Randomly generated value applied to individual die
    for(int hand=1;hand<=nHands;hand++){
    // declare the dice and sum the results
        unsigned char Die1=rand()%6+1;
        unsigned char Die2=rand()%6+1;
        unsigned char Die3=rand()%6+1;
        unsigned char Die4=rand()%6+1;
        unsigned char Die5=rand()%6+1;
      
    switch (Die1) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die2) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die3) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4:  NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die4) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die5) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            } 
        
        //Output the 5 unique dice
       
        if (Die1 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die1 ==2) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die1 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die2 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die2 ==2) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die2 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die2 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die3 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die3 ==2) {                 //symbol applied to die with given value
           cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die3 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die3 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die4 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die4 ==2) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die4 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==5) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die5 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die5 ==2) {
           cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die5 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die5 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
         
        
    //Option to re-roll Die 1
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"     Do you want to Roll Die 1 again? (y/n)";
        cin>>choice1;
    // If user opts in to change die1
        if (choice1=='y')
            bool re1=true;
                do {
                    Die1 = rand()%6+1;  // generate a new die for die 
                if (Die1 ==1 && choice1=='y') { 
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die1 ==2 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==3 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die1 ==4 && choice1=='y') {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==5 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==6 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }        
        }while (re1 && choice1=='y');
        
    //Option to Re-roll for Dice 2
    cout<<"     Do you want to Roll Die 2 again? (y/n)";
      cin>>choice2;
       
        if (choice2=='y')
            bool re2=true;
              do {
               Die2 = rand()%6+1; // generate a new die for die 
        if (Die2 ==1 && choice2=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
            bool Dice21 = true;
             }
        if (Die2 ==2 && choice2=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
            bool Dice22 = true;
             }
        if (Die2 ==3 && choice2=='y') { 
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            bool Dice23 = true;
            }
        if (Die2 ==4 && choice2=='y') { 
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            bool Dice24 = true;
            }
        if (Die2 ==5 && choice2=='y') { 
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            bool Dice25 = true;
            }
        if (Die2 ==6 && choice2=='y') { 
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            bool Dice26 = true;
            }
        }while (re2 && choice2=='y');
        
    //Option to Re-roll for Die 3     
    cout<<"     Do you want to Roll Die 3 again? (y/n)";
    cin>>choice3;

        if (choice3=='y')
          bool re3=true;
            do {
              Die3 = rand()%6+1;        //generate new die
        if (Die3 ==1 && choice3=='y') { 
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
            
             }
        if (Die3 ==2 && choice3=='y') { 
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==3 && choice3=='y') { 
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die3 ==4 && choice3=='y') { 
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die3 ==5 && choice3=='y') { 
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die3 ==6 && choice3=='y') { 
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }       
        }while (re3 && choice4=='y');
        
    //Option to re-roll Die 4   
    cout<<"     Do you want to Roll Die 4 again? (y/n)";
    cin>>choice4;

        if (choice4=='y')
          bool re4=true;
            do {
              Die4 = rand()%6+1;        //generate new die
        if (Die4 ==1 && choice4=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die4 ==2 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==3 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die4 ==4 && choice4=='y') {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==5 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==6 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }      
          }while (re4 && choice4 =='y');
          
     //Option to re-roll Die 5     
    cout<<"     Do you want to Roll Die 5 again? (y/n)";
    cin>>choice5;

        if (choice5=='y')
          bool re5=true;
            do {
              Die5 = rand()%6+1;               // generate a new die
               if (Die5 ==1 && choice5=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die5 ==2 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==3 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die5 ==4 && choice5=='y') {
            cout<<"***********\n"
                   << "* ______  *\n"
                   << "*|      | *\n"
                   << "*|____\\_| *\n"
                   << "*      \\  *\n"
                   << "***********\n";
            }
        if (Die5 ==5 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die5 ==6 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }       
            }while ((re5) && (choice5 =='y')); 
    
            
            
    //Determine the possible hands of tossed dice
    //sum up variables per die
        
        switch (Die1) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die2) {
            case 1 :
                if (Dice21 == true) 
                    NumOF1s +=1; 
                else (Dice21 == false);
            case 2 : 
                if (Dice22 == true) 
                    NumOF2s +=1; 
                else (Dice22 == false);
            case 3 : 
                if (Dice23 == true) 
                    NumOF3s +=1; 
                else (Dice23 == false);
            case 4 : 
                if (Dice24 == true) 
                    NumOF4s +=1;
                else (Dice24 == false);
            case 5 : 
                if (Dice25 == true) 
                    NumOF5s +=1;
                else (Dice25 == false);
            case 6 :
                if (Dice26 == true) 
                    NumOF6s +=1; 
                else (Dice26 == false);
            }
        switch (Die3) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4:  NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die4) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die5) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            } 
          
    //Card Results
     cout<<setw(27);
     cout<<"Dice Results"<<right<<endl;    
     cout<<"   ======================================="<<endl;
     cout<<"       There are    "<<NumOF1s<<"     9's"<<endl;
     cout<<"       There are    "<<NumOF2s<<"     10's"<<endl;
     cout<<"       There are    "<<NumOF3s<<"     Jack's"<<endl;
     cout<<"       There are    "<<NumOF4s<<"     Queen's"<<endl;
     cout<<"       There are    "<<NumOF5s<<"     King's"<<endl;
     cout<<"       There are    "<<NumOF6s<<"     Ace's"<<endl;
        
     cout<<setw(27);
     cout<<"Winning Hand"<<right<<endl; 
     cout<<"   ======================================="<<endl;
    
    //Determine how many four of a kinds are in given 
        if (((NumOF1s == 4) || (NumOF2s == 4) || (NumOF3s ==4) || (NumOF4s ==4) 
             || (NumOF5s == 4) || (NumOF6s == 4)) && (FiveOAK==false))
            {
               cout << "       You Rolled four of a kind!!!!" << endl;
               FourOAK=true;
            }
        
    //Determine if a five of a kind was rolled  
        if (NumOF1s == 5 || NumOF2s == 5 || NumOF3s == 5 || NumOF4s == 5 || 
                 NumOF5s == 5 || NumOF6s == 5 )
           {
              cout << "       You Rolled five of a kind!!!!!" << endl;
              FiveOAK =true;
           }
        
    //Determine if a straight was rolled
        if (((NumOF1s >= 1 && NumOF1s < 6) && (NumOF2s >= 1 && NumOF2s < 6)&& 
            (NumOF3s >= 1 && NumOF3s < 6) && (NumOF4s >= 1 && NumOF4s < 6) && 
            (NumOF5s >= 1 && NumOF5s < 6)) && (NumOF1s != NumOF2s && NumOF2s != 
            NumOF3s && NumOF3s != NumOF4s && NumOF4s != NumOF5s))
           {
              cout << "      You rolled a straight!!!" << endl;
           }
        else if (((NumOF1s > 1 && NumOF1s <= 6) && (NumOF2s > 1 && NumOF2s <=6) 
            && (NumOF3s > 1 && NumOF3s <= 6) && (NumOF4s > 1 && NumOF4s <= 6)&& 
            (NumOF5s > 1 && NumOF5s <= 6)) && (NumOF1s != NumOF2s && NumOF2s != 
            NumOF3s && NumOF3s != NumOF4s && NumOF4s != NumOF5s))
           {
              cout << "       You rolled a straight!!!!" << endl;
           }
       
     //Determine if two pairs was rolled
        if (((NumOF1s == 2) && (NumOF2s ==2 || NumOF3s==2||NumOF4s==2 ||
            NumOF5s==2 ||NumOF6s==2)) && (FourOAK == false 
            && ThreeOAK ==false && FiveOAK == false && FullH == false))
             {
                cout<< "       You Rolled two pairs!!"<<endl;
                TwoPairs = true;
             }
        
        if (((NumOF2s==2) && (NumOF3s==2||NumOF4s==2|| NumOF5s==2 ||NumOF6s==2))
              && (FourOAK == false &&ThreeOAK ==false 
              && FiveOAK == false && FullH == false))
           {
              cout<< "       You Rolled two pairs!!"<<endl;
              TwoPairs = true;
           }
        if (((NumOF3s==2) && (NumOF4s==2|| NumOF5s==2 || NumOF6s==2))
            && (FourOAK == false &&ThreeOAK ==false 
            && FiveOAK == false && FullH == false))
           {
              cout<< "       You Rolled two pairs!!!"<<endl;
              TwoPairs = true;
           }
        if (((NumOF4s==2) && (NumOF5s==2 || NumOF6s==2))
            && (FourOAK == false &&ThreeOAK ==false 
            && FiveOAK == false && FullH == false))
           {
              cout<< "       You Rolled two pairs!!!"<<endl;
              TwoPairs = true;
           }
        if (((NumOF5s==2) && (NumOF6s==2)) && (FourOAK == false 
            && ThreeOAK ==false && FiveOAK == false && FullH == false))
           {
              cout<< "       You Rolled two pairs!!!"<<endl;
              TwoPairs = true;
           }
        
      //Determine how many two of a kinds are in given hand  
        if ((NumOF1s == 2 || NumOF2s == 2 || NumOF3s == 2 || 
            NumOF4s == 2 || NumOF5s == 2 || NumOF6s == 2) 
            && (TwoPairs==false&& FullH ==false))
           {
              cout<<"       You rolled two of a kind!!"<<endl;
              TwoOAK = true;
           }       
     //Determine if a three of a kind was rolled 
        if ((NumOF1s == 3 || NumOF2s == 3 || NumOF3s == 3 || NumOF4s == 3 || 
              NumOF5s == 3 || NumOF6s == 3) 
              && (FiveOAK == false && FourOAK == false && FullH ==false))      
            {
              cout << "       You Rolled three of a kind!!!" << endl;
              ThreeOAK = true;
            }    
      //Determine if a full house was rolled
        if ((TwoOAK == true && ThreeOAK == true) || (ThreeOAK ==true && TwoPairs ==true))
           {
              cout << "       You Rolled a full house!!!!" << endl;
              FullH = true;
           }   
        
    }
    
    //Exit
    return 0;
}

//generate die
string getDie(int nLines){
    //Declare variables
    fstream in;
    string die;
    //Initialize variables
    in.open("die.dat");
    //Look through file to find the random Die Value
    for(int line=1;line<=nLines;line++){
        in>>die;
    }
    //Close the file
    in.close();
    //Return the random Die
   
    return die;
}
