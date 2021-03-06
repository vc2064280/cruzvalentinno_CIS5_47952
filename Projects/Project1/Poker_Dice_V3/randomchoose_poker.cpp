/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on October 31st, 2018, 10:27 AM
 * Purpose:  Poker Dice Project 
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

string getDie(int);
string getDie();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Test out the Dice Roll and pick 5 unique Dice
    string Die1,Die2,Die3,Die4,Die5;
    int nHands=1;
    int NumOF1s = 0, NumOF2s = 0, 
         NumOF3s = 0, NumOF4s = 0, NumOF5s = 0, NumOF6s = 0;
    bool TwoOFakind = false;
    bool ThreeOFakind = false;
    
    //Choose Die
    for(int hand=1;hand<=nHands;hand++){
        unsigned char Die1=rand()%6+1;
        unsigned char Die2=rand()%6+1;
        unsigned char Die3=rand()%6+1;
        unsigned char Die4=rand()%6+1;
        unsigned char Die5=rand()%6+1;
      
        //Output the 5 unique dies
       
        if (Die1 ==1) {
            cout<<"Nine"<<endl;
        }
        if (Die1 ==2) {
            cout<<"Ten"<<endl;
        }
        if (Die1 ==3) {
            cout<<"Jack"<<endl;
        }
        if (Die1 ==4) {
            cout<<"Queen"<<endl;
        }
        if (Die1 ==5) {
            cout<<"King"<<endl;
        }
        if (Die1 ==6) {
            cout<<"Ace"<<endl;
        }
         if (Die2 ==1) {
            cout<<"Nine"<<endl;
        }
        if (Die2 ==2) {
            cout<<"Ten"<<endl;
        }
        if (Die2 ==3) {
            cout<<"Jack"<<endl;
        }
        if (Die2 ==4) {
            cout<<"Queen"<<endl;
        }
        if (Die2 ==5) {
            cout<<"King"<<endl;
        }
        if (Die2 ==6) {
            cout<<"Ace"<<endl;
        }
         if (Die3 ==1) {
            cout<<"Nine"<<endl;
        }
        if (Die3 ==2) {
            cout<<"Ten"<<endl;
        }
        if (Die3 ==3) {
            cout<<"Jack"<<endl;
        }
        if (Die3 ==4) {
            cout<<"Queen"<<endl;
        }
        if (Die3 ==5) {
            cout<<"King"<<endl;
        }
        if (Die3 ==6) {
            cout<<"Ace"<<endl;
        }
         if (Die4 ==1) {
            cout<<"Nine"<<endl;
        }
        if (Die4 ==2) {
            cout<<"Ten"<<endl;
        }
        if (Die4 ==3) {
            cout<<"Jack"<<endl;
        }
        if (Die4 ==4) {
            cout<<"Queen"<<endl;
        }
        if (Die4 ==5) {
            cout<<"King"<<endl;
        }
        if (Die4 ==6) {
            cout<<"Ace"<<endl;
        }
        if (Die5 ==1) {
            cout<<"Nine"<<endl;
        }
        if (Die5 ==2) {
            cout<<"Ten"<<endl;
        }
        if (Die5 ==3) {
            cout<<"Jack"<<endl;
        }
        if (Die5 ==4) {
            cout<<"Queen"<<endl;
        }
        if (Die5 ==5) {
            cout<<"King"<<endl;
        }
        if (Die5 ==6) {
            cout<<"Ace"<<endl;
        }
        
        switch (Die1) {
            case 1 : NumOF1s +=1;
            break;
            case 2 : NumOF2s +=1;
            break;
            case 3 : NumOF3s +=1;
            break;
            case  4:NumOF4s +=1;
            break;
            case 5 : NumOF5s +=1;
             break;
            case 6 : NumOF6s +=1;
             break;
        }
          switch (Die2) {
            case 1 : NumOF1s +=1;
            break;
            case 2 : NumOF2s +=1;
            break;
            case 3 : NumOF3s +=1;
            break;
            case  4:NumOF4s +=1;
            break;
            case 5 : NumOF5s +=1;
             break;
            case 6 : NumOF6s +=1;
             break;
        }
         switch (Die3) {
           case 1 : NumOF1s +=1;
            break;
            case 2 : NumOF2s +=1;
            break;
            case 3 : NumOF3s +=1;
            break;
            case  4:NumOF4s +=1;
            break;
            case 5 : NumOF5s +=1;
             break;
            case 6 : NumOF6s +=1;
             break;
        }
          switch (Die4) {
            case 1 : NumOF1s +=1;
            break;
            case 2 : NumOF2s +=1;
            break;
            case 3 : NumOF3s +=1;
            break;
            case  4:NumOF4s +=1;
            break;
            case 5 : NumOF5s +=1;
             break;
            case 6 : NumOF6s +=1;
             break;
        }
          switch (Die5) {
           case 1 : NumOF1s +=1;
            break;
            case 2 : NumOF2s +=1;
            break;
            case 3 : NumOF3s +=1;
            break;
            case  4:NumOF4s +=1;
            break;
            case 5 : NumOF5s +=1;
             break;
            case 6 : NumOF6s +=1;
             break;
        }
        
          cout<<" "<<endl;
   if (NumOF1s == 2 || NumOF2s == 2 || NumOF3s == 2 || NumOF4s == 2 || NumOF5s == 2 || NumOF6s == 2)
{
    TwoOFakind = true;
}
 if ((NumOF1s == 2 || NumOF2s == 2 || NumOF3s == 2 || NumOF4s == 2 || NumOF5s == 2 || NumOF6s == 2)
    && (NumOF1s == 2 || NumOF2s == 2 || NumOF3s == 2 || NumOF4s == 2 || NumOF5s == 2 || NumOF6s == 2))
 {
        cout<< "You Rolled two pair!!!"<<endl;
    }



if (NumOF1s == 3 || NumOF2s == 3 || NumOF3s == 3 || NumOF4s == 3 || NumOF5s == 3 || NumOF6s == 3)
{
    cout << "You Rolled three of a kind!!!" << endl;
    ThreeOFakind = true;
}

if (NumOF1s == 4 || NumOF2s == 4 || NumOF3s == 4 || NumOF4s == 4 || NumOF5s == 4 || NumOF6s == 4)
{
    cout << "You Rolled four of a kind!!!" << endl;
}

if (NumOF1s == 5 || NumOF2s == 5 || NumOF3s == 5 || NumOF4s == 5 || NumOF5s == 5 || NumOF6s == 5)
{
    cout << "You Rolled five of a kind!!!" << endl;
}


//
if (TwoOFakind == true && ThreeOFakind == true)
{
     cout << "You Rolled a full house!!!!" << endl;
}


if (Die1 == Die2 && Die2 == Die3 && Die3 == Die4 && Die4 == Die5)
{
    cout << "No straight" << endl;
}
else
{
    if (((Die1 >= 1 && Die1 < 6) && (Die2 >= 1 && Die2 < 6) && (Die3 >= 1 && Die3 < 6) && (Die4 >= 1 && Die4 < 6)
            && (Die5 >= 1 && Die5 < 6)) && (Die1 != Die2 && Die2 != Die3 && Die3 != Die4 && Die4 != Die5))
    {
        cout << "You Rolled a Straight!!!!" << endl;
    }
    else if (((Die1 > 1 && Die1 <= 6) && (Die2 > 1 && Die2 <= 6) && (Die3 > 1 && Die3 <= 6) && (Die4 > 1 
       && Die4 <= 6) && (Die5 > 1 && Die5 <= 6)) && (Die1 != Die2 && Die2 != Die3 && Die3 != Die4 && Die4 != Die5))
    {
        cout << "You Rolled a Straight!!!!" << endl;
    }
    
}
    }

    //Exit
    return 0;
}

string getDie(int nLines){
    //Declare variables
    fstream in;
    string die;
    //Initialize variables
    in.open("die.dat");
    //Look through file to find the random color
    for(int line=1;line<=nLines;line++){
        in>>die;
    }
    //Close the file
    in.close();
    //Return the random color
    
    
    return die;
}
