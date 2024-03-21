//T4 tutorial Problem Practice
//Question : 14
//C++  Program to check whether the triangle is an equilateral, isosceles or scalene triangle.
// Using switch statement.
#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout<<"Enter the angles of triangle : ";
    cin>>a>>b>>c;

    switch( (a == b) + (b == c) + (c == a))
    {
        case 3:
            cout << "Equilateral Triangle" << endl;
            break;
        case 2:
            cout << "Isosceles Triangle" << endl;
            break;
        case 0:
            cout << "Scalene Triangle" << endl;
            break;
    }
    return 0;

}