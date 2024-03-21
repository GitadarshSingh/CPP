// T4tutorials problem practice of switch case.

//Question 10 :
//C++  Program to take the value from the user as an input week number and print weekday by using the switch statement.

#include<iostream>
using namespace std;
int main()
{
    int day  ;
    cout<<"Enter the number of days : ";
    cin>>day;

    switch(day)
    {
        case 1 : cout<<"monday";
        break ;

        case 2 : cout<<"tuesday";
        break;

        case 3 : cout<<"wednsday";
        break;

        case 4 : cout<<"thursday";
        break;

        case 5 : cout<<"friday";
        break;

        case 6 : cout<<"Saturday";
        break;

        case 7 : cout<<"Sunday";
        break;

        default : cout<<"Invalid day number : ";

        return 0;
    }
}