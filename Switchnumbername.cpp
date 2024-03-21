#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number ;

    switch(number)
    {
        case 1 : cout<<"One";
        break;

        case 2 : cout<<"Two";
        break;

        case 3 : cout<<"Three";
        break;

        case 4 : cout<<"Four";
        break;

        case 5 : cout<<"Five";
        break;

        case 6 : cout<<"Six";
        break;

        case 7 : cout<<"Seven";
        break;

        case 8 : cout<<"Nine";
        break;

        default : cout<<"Invalid number";
    
    }
    return 0 ;
}