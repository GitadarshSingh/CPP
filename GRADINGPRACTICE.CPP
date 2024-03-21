#include<iostream>
using namespace std;
int main()
{
    int F,E,D,C,B,A, Marks ;
    cout<<"Enter the marks of the students : " ;
    cin>>Marks;

    if(Marks<=25)
    {
        cout<<"F"<<endl;
    }
    else if(Marks>25 && Marks<=45)
    {
        cout<<"E"<<endl;
    }
    else if(Marks>45 && Marks<=50)
    {
        cout<<"D"<<endl;
    }
    else if(Marks>50 && Marks<=60)
    {
        cout<<"C"<<endl;
    }
    else if(Marks>60 && Marks<=80)
    {
        cout<<"B"<<endl;
    }
    else if(Marks>80 && Marks<=100)
    {
        cout<<"A"<<endl;
    }
    else 
    {
        cout<<"Invalid Marks of Students";
    }

    return 0;
}
