//T4 Tutorial Practic Problem
//Question : 3
//Program in C++ to check that whether a number is even or odd with flowchart.
#include<iostream>
using namespace std;
int main()
{
    int Number ;
    cout<<"Enter the number : ";
    cin>>Number;
    
    if(Number % 2 == 0)
    {
        cout<<"Given number is Even "<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
    return 0 ;
}

