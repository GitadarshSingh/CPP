//C++ Abdul bari 

#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu\n";
    cout<<"1. Add\n"<<"2. Subtract\n"<<"3. Multiply\n"<<"4. Div\n"<<"";

    int option;
    cout<<"Enter you choice :";
    cin>>option;

    int a , b, c ;
    cout<<"Enter 2 numbers :";
    cin>>a>>b;

    switch(option)
    {
        case 1 : c = a + b ;
        break;

        case 2 : c = a - b;
        break;
        
        case 3 : c = a * b;
        break;

        case 4 : c = a / b;
    }
    cout<<c<<endl;

    return 0;
}