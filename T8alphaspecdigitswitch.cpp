//T4Tutorials practice problem of switch case .

// 8. C++  Program to take the value from the user as input any character and check whether it is the alphabet, digit or special character. Using the switch statement.

//Solution:
//character (ch) , includes alphabets , number and special character. so, you  don't need to declare alphabet , number , special character one by one. 
//ch = A,B,C,D,E,.......  ,  0,1,2,3,4,5,6,7,..   , !,@,#,$,%,^,&,?,(),.......
// alphabets =adarsh123.
#include<iostream>
using namespace std;
int main()
{
    char ch ;
    cout<<"Enter the character : ";
    cin>>ch;

    switch(toupper(ch))
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
        case 'Z' : cout<<"It is an Alphabet"<<endl;
        break;

        case '0' :
        case '1' :
        case '2' :
        case '3' :
        case '4' :
        case '5' :
        case '6' :
        case '7' :
        case '8' :
        case '9' : cout<<"It is a Number"<<endl;
        break;

        default : cout<<"It is a special character."<<endl;
        break;
    }
    return 0;
}