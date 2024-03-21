// from T4tutorials problem practice
//Question: 21
//Program to take the hours and minutes as input by the user and 
//the show that whether it is AM or PM by using the switch statement.

#include<iostream>
using namespace std;
int main()
{
    int AM , PM  , Hours , Minutes ;
    cout<<"Enter the  hours : ";
    cin>>Hours;

    cout<<"Enter the minutes : ";
    cin>>Minutes;

   if ( Hours >= 0 && Hours <= 24 && Minutes >= 0 && Minutes <= 59 )
   switch(Hours)
    {
        case 1 : 
        case 2 : 
        case 3 : 
        case 4 : 
        case 5 : 
        case 6 : 
        case 7 : 
        case 8 : 
        case 9 : 
        case 10 : 
        case 11 : 
        case 12 :  cout <<"AM"<<endl;
        break;
    

        case 13 :
        case 14 :
        case 15 :
        case 16 :
        case 17 :
        case 18 :
        case 19 :
        case 20 :
        case 21 :
        case 22 :
        case 23 :
        case 24 : cout<<"PM"<<endl;
        break ;

        
    }
    else 
    {

    cout<<"invalid"<<endl;
    }
    return 0;
}