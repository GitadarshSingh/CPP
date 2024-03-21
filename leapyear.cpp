//By Abdul Bari


#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    
    if ( year % 4 == 0)
    {
        cout<<"Leap";
    }
    else if (year % 100 == 0)
    {
        cout<<"Leap";
    }
    else if(year % 400 == 0)
    {
        cout<<"Leap";
    }
    else{
        cout<<"Invalid year";
    }
    return 0;

}   
   
    