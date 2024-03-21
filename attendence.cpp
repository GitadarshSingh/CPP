#include<iostream>
using namespace std;
int main()
{
    int attendance ;
    int studentclass;
   
    cout<<"Enter the attedance : ";
    cin>>studentclass;
    cin>>attendance;

    if (attendance>=75 && attendance<=100)
    {
        cout<<"Eligible";
    }
    else{
        cout<<"Not Eligible";
    }
    return 0;
}