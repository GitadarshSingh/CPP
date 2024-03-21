// Addation of first N natural number
#include<iostream>
using namespace std;
int main() 
{
    int n,i,sum=0;
    cout<<"Enter the N: ";
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum Of N naturatl number is : "<<sum;

    return 0;
    
}

//-------------------------------------------------------------------------------------------------------------

// Same Problem Using While Loop.

{
    int n ,i = 1, sum=0;
    cout<<"Enter the n Nantural Number : ";
    cin>>n;
    while (i<=n)
    {
        sum += i;
        i++;
    }
    cout<<"Sum Of n Natural number: "<<sum;
    
}
