//Factorial N

#include<iostream>
using namespace std;
int main() 
{
    int n,i,fact=1;
    cout<<"Enter N: ";
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    cout<<n<<"!="<<fact;
    return 0;
    
}