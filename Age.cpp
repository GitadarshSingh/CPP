#include<iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"Enter the age : " ;
    cin>>age;

    if (age>=12 && age<=50)
    {
        cout<<"Young";
    }
    else
    {
        cout<<"Aged";
    }
    return 0;
}