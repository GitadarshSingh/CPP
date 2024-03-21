#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the number 'n' : " ;
    cin>>n;

    if( n >= 1 && n <= 9)
    {
        cout<<" one , two , three , four , five , six , seven , eight , nine "
    }
    else
    {
        if( n > 9)
        {
            cout<<"Greater than 9 " ;
        }
        else{
                 cout<<"Number is invalid";
        }

   


        return 0 ;
    }
}