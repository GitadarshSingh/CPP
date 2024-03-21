//T4 Tutorial Practic Problem
//Question : 8
//Program to find greater number among three numbers in c++ and C with flowchart
#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout<<"Enter the A : ";
    cin>>a;
    cout<<"Enter the B : ";
    cin>>b;
    cout<<"Enter the C : ";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<"A is greater "<<endl;
    }
    else if (b>a && b > c)
    {
        cout<<"B is greater "<<endl;
    }
    else if (c>a && c>b)
    {
        cout<<"C is greater "<<endl;
    }
    else 
    {
        cout<<"Same or Invalid Number "<<endl;
    }
  return 0 ;
}