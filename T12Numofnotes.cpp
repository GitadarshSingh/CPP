//T4 Tutorial Practice Problem

//Question : 12 
//C++ Program to count the total number of notes in a given amount. Using the switch statement
#include<iostream>
using namespace std;
int main()
{
    int amount ,total_notes ;
    int note500 , note200 , note100 ,note50 , note20 , note10 , note5 , note1;
    cout<<"Enter the number of amount : ";
    cin>>amount;

    

    switch(amount>=500)
    {
         case 500 :  notes500 = amount / 500 ;
        break;

        default :
    }  
    switch(amount>=200)
    {
        case 200 :  notes200    = amount / 200 ;
        break;

        default :
        break;
    }
    switch(amount>=100)
    {
        case 100 :  notes100    = amount / 100 ;
        break;

        default :
        break;
    }
    switch(amount>=50)
    {
       case 50 :   notes50    = amount / 50 ;
        break;

        default :
        break;
    }

    switch(amount>=20)
    {
        case 20 :  notes20    = amount / 20 ;
        break;

        default :
        break;
    }

    switch(amount>=10)
    {

        case 10 :  notes10    = amount / 10 ;
        break;

        default :
        break;
    }

    switch(amount>=5)
    {
        case 5 :  notes5    = amount / 5 ;
        break;

        default :
        break;
    }
    switch(amount>=2)
    {
        case 2 :  notes2   = amount / 2 ;
        break;   

        default:
        break;
    }

    switch(amount>=1)
    {
         case 1 :  notes1   = amount / 1 ;
        break;

        default : cout<<"Invalid"<<endl;
        break;  

    }
       
    cout << "Number of 500 notes: " << notes500 << endl;
    cout << "Number of 200 notes: " << notes200 << endl;
    cout << "Number of 100 notes: " << notes100 << endl;
    cout << "Number of 50 notes: " << notes50 << endl;
    cout << "Number of 20 notes: " << notes20 << endl;
    cout << "Number of 10 notes: " << notes10 << endl;
    cout << "Number of 5 notes: " << notes5 << endl;
    cout << "Number of 2 notes: " << notes2 << endl;
    cout << "Number of 1 notes: " << notes1 << endl;

    return 0;
       
 }

    
