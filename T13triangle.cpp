//T4 tutorial Problem Practice

//Question : 13
//C++  Program to take the value from the user as input all sides of a triangle and 
//     check whether the triangle is valid or not. Using switch statement.

#include<iostream>
using namespace std ;
int main()
{
    int a1 ,a2 , a3 , angle;
    cout<<"Enter the angles of triangle : " ;
    cin>>a1>>a2>>a3;

    angle =  a1 + a2 + a3;
    
    switch( angle )
    {
        case 180 : cout<<"Valid triangle"<<endl;
        break;

        default : cout<<"Invalid triangle"<<endl;
        break;
    }
    return 0 ;
}

