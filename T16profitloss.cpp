//T4 Tutorial Practice Problem
// Question : 16
// C++  Program to calculate profit or loss. Using switch statement.
//sol^n :
 //  Profit = Revenue - Expenses and Loss = Expenses - Revenue

 //Where :
 //Revenue is the amount of money that a business makes from selling its goods or services.
 //Expenses are the costs that a business incurs in order to operate,
 // such as rent, salaries, and utilities

#include<iostream>
using namespace std;
int main ()
{
    int  Revenue , Expenses , Profit , Loss ;
    cout<<"Enter the Expenses : ";
    cin>>Expenses;

    cout<<"Enter the Revenue : ";
    cin>>Revenue ;

    switch(Revenue > Expenses )
    {
        case 1 : 
        cout<<"Profit"<<endl;
        break;

        case 0 : 
        cout<<"Loss"<<endl;
    }
    
    return 0;
}
