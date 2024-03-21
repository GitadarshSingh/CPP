#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int b , a , c , d , r1 , r2 ;
    cout<<"Enter the coefficiant of quadratic equation : "  ;
    cin>>b>>a>>c ;

    d = b*b - 4 * a * c ;

    if(d==0)
    {
       cout<<"real and equal and root is  : "<<(-b/(2*a))<<endl;
    }
    else
    {
        if(d>0)
        {
            cout<<"real and unequal"<<(-b+sqrt(d)/(2*a))<<endl;
            cout<<(-b-sqrt(d)/(2*a))<<endl;
        }
        else
        {
             cout<<"imaginary"<<endl;

        }
    }
    return 0;
}