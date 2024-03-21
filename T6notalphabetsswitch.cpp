//T4Tutorials practice problem of switch case .

// 6. C++  Program to check whether a character is an alphabet or not. Using the switch statement.
//Solution:
//'toupper' coverts uppercase into lowercase of alphabets. 
#include<iostream>
using namespace std ;
int main ()
{
    char alphabet ;
    cout<<"Enter any character : " ;
    cin>>alphabet;

    switch(toupper(alphabet))
    {
        case 'A' :
        case 'B' :
        case 'C' :
        case 'D' :
        case 'E' :
        case 'F' :
        case 'G' :
        case 'H' :
        case 'I' :
        case 'J' :
        case 'K' :
        case 'L' :
        case 'M' :
        case 'N' :
        case 'O' :
        case 'P' :
        case 'Q' :
        case 'R' :
        case 'S' :
        case 'T' :
        case 'U' :
        case 'V' :
        case 'W' :
        case 'X' :
        case 'Y' :
        case 'Z' :  cout<<"Alphabets "<<endl;
        break;
        

        default : cout<<"Not an Alphabet"<<endl;
        break;

    }
    return 0;

} 