#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout<<"Enter two numbers :" ;
    cin>>a>>b;


    if(b==0)
    {
        cout<<"invalid"<<endl;
    }
    else
    {

        c = a / b;
        cout<<c<<endl;
    }
    return 0 ;
    
      

    

}