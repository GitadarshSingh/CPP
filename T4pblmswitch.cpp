// T4tutorials problem practice of switch case.

//Question : 4
//C++  Program to check whether a number is divisible by 5 and 11 or not. Using the switch statement
#include <iostream>
using namespace std;

int main()
{
    int number ;
    cout<<"Enter the number : ";
    cin>>number  ;

    switch (number % 5)
    {
        case 0 :
        switch (number % 11 )
        {
            case 0:
            cout<<"Number is divisible by both 5 and 11 "<<endl;
            break;

            default :
            cout<<"Number is divisible by 5 "<<endl;
            break;
        }
        break;

        default : 

        switch (number % 11)
        {
            case 0 :
            cout<<"Number is divisible by 11"<<endl;
            break;

            default :
            cout<<"Number is not divisible by 5 and 11 both"<<endl;
            break;
        }
        break ;
    }

    return 0;

    
}

   

