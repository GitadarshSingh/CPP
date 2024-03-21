#include<iostream>
using namespace std;
int main()
{
    int m1 , m2 , m3 , Total ;
    float Avg ;
    cout<<"Enter the marks of students in all three subject : " ;
    cin>>m1>>m2>>m3 ;

    Total = m1 + m2 + m3 ;
    Avg = Total/3;

    if ( Avg >= 60)
    {
        cout<<"A"<<endl;
    }
    else if (Avg>=35 && Avg<60)
    {
        cout<<"B"<<endl;
    }
    else
    {
        cout<<"C"<<endl;
    }
    return 0 ;
}