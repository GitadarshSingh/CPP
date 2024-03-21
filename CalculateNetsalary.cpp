#include<iostream>
using namespace std;

int main()
{
    int D , A , B , C  ;

    cout<<"Enter the Basic Salary , Percentage Allowances ,  Percentage Deduction : " ;

    cin>>A>>B>>C;

    D = A + A * B / 100 - A * C / 100 ;

    cout<<"Enter the Net Salary"<<D<<endl ;
    return 0;
}