//T4 Tutorial Practic Problem
//Question : 6
//Write a function to compute the square-root of a given number. If the given number is 
//negative, your function should give an error message.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number , Square_root ;
    cout<<"Enter the number : ";
    cin>>number;

    Square_root = sqrt(number);

    if(number>0)
    {
        cout<<"Square root is : "<<Square_root<<endl;
    }
    else
    {
       cout<<" Error "<<endl;
    }
    return 0 ;
}