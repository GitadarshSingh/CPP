//T4Tutorials practice problem of switch case .
// 7.  C++  Program to take the value from the user as input any alphabet and check whether it is vowel or consonant. Using the switch statement
#include<iostream>

using namespace std;
int main()
{
    char alphabet ;
    cout<<"Enter the alphabet : " ;
    cin>>alphabet ;

    switch( alphabet )
    {
        case 'A' :
        case 'a' :
        case 'E' :
        case 'e' :
        case 'I' :
        case 'i' :
        case 'O' :
        case 'o' :
        case 'U' :
        case 'u' : cout<<"Given alphabet is vowel "<<endl;
        break;

        default : cout <<"Given alphabet is consonant"<<endl;
        break;
    }   

    return 0 ;
} 





