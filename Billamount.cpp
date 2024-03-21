#include<iostream>
using namespace std;
int main()
{
    float billamount , discount; 

    cout<<"Enter the billamount :";
    cin>>billamount;

    if(billamount>=500)
    {
        discount = billamount * 20 / 100 ;

        cout<<"the discount is : "<<discount<<endl;
    }
    else if (billamount>=100 && billamount<500)
    {
        discount = billamount * 10 / 100;

        cout<<" The discount is : "<<discount<<endl;
    }
    else{
        cout<<"invalid discount";
    }
    return 0;
}