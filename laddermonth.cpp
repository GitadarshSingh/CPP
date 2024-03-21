#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter the month number : " ;
    cin>>month;

    if(month==1)
    {
        cout<<"January"<<endl;
    }
    else if (month==2)
    {
        cout<<"Feburary"<<endl;
    }
    else if (month==3)
    {
        cout<<"March"<<endl;
    }
    else if (month==4)
    {
        cout<<"April"<<endl;
    }
    else if (month==5)
    {
        cout<<"May"<<endl;
    }
    else
    {
        cout<<"invalid";
    }
    return 0;
}