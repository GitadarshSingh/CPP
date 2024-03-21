//T4 Tutorial Practic Problem
//Question : 9

//Armstrong Number Program in C++, C Plus Plus CPP with Flowchart
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Armstrong_Number , digit_1 ,digit_2  , digit_3 ;
    cout<<"Enter the digit1 : ";
    cin>>digit_1;

    cout<<"Enter the digit2 : ";
    cin>>digit_2;

    cout<<"Enter the digit3 : ";
    cin>>digit_3;

    Armstrong_Number = pow(digit_1 ,3)+ pow(digit_2 ,3)+ pow(digit_3 ,3);
    

    
    if(Armstrong_Number == (digit_1 *100 + digit_2*10 + digit_3))
    {
        cout<<"Armstrong_Number : "<<Armstrong_Number<<endl;
    }
    else
    {
        cout<<"Not a Armstrong Number : "<<Armstrong_Number<<endl;
    }
    return 0;
}