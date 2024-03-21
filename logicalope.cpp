#include<iostream>
using namespace std;

int main()
{
    int hours ;
    cout<<"Enter Hours : " ;
    cin>>hours;
    
    if(hours>=9 && hours<=18)
    {
        cout<<"Working Hours" ;
    }
    else
    {
        cout<<"leisur hours" ;
    }
    return 0;
    
}