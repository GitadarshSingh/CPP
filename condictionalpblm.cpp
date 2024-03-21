#include<iostream>
using namespace std;
int main()
{
    char character ;
    cout<<"Enter the character: " ;
    cin>>character ;

    if(character>='a' && character<='z')
    {
        cout<<"it is in lowercase"<<endl;
    }
    else 
    {
        if (character >= 'A' && character <='Z')
        {
            cout<<"It is in UPPERCASE ";
        }
        else{
            cout<<"Not a character";
        }
        
    }
   

    return 0 ;
}