#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout<<"Enter the three numbers : " ;
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<"Greatest is 'A'  ";
    }
    else if(b>c)
            cout<<"Greater is 'B' " ;
        else
        cout<<"Greater is 'C' ";
        

        return 0;
    }

