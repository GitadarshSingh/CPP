//T4 Tutorial Practic Problem
//Question : 2 
// check that the entered character is small, capital,or a special character.

#include<iostream>
using namespace std;
int main()
{
    char character ;
    
    cout<<"Enter the Character : ";
    cin>> character ;

    if(character>='A' && character<='Z')
    {
        cout<<"Uppercase"<<endl;
    }
    else if(character>='a' && character<='z' )
    {
        cout<<"Lowercase"<<endl;
    }
    else{
        cout<<"special character"<<endl;
    }
    return 0;

}

