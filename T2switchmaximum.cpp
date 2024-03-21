//T4Tutorials practice problem of switch case .
//question:2
//C++  Program to find the maximum between two numbers. Using the switch statement.

#include<iostream>
using namespace std ;
int main()
{
    int x , y ;
    

    cout<<"Enter the numbers : ";
    cin>>x>>y;

    switch (x>y)
    {
        case true :
        cout<<"x is grater"<<endl;
        break ;

        case false : 
        cout<<"y is greater"<<endl;
        break;

        default : cout<<"invalid number";
        break;
    }
    return 0;
}