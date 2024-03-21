// from T4tutorials problem practice
//Question: 22
//Program to convert a positive number into negative number and negative number 
//into a positive number using switch  statement .

#include<iostream>
using namespace std ;
int main()
{
    int choice ,number  ;
    
    cout<<"Select 1 ,Enter the Positive to Negative Number : "<<endl;
    cout<<"Select 2 ,Enter the Negative to Positive Number : "<<endl;
    cout<<"Choose or Select one of the above options : " ;
    cin>>choice;

    switch(choice)
    {
        case 1 :
        cout<<"Enter the Positive Number : ";
        cin>>number;
        number=number*(-1);
        cout<<"The Negative form of the number is : " ;
        cout<<number;

        break;

        case 2 : 
        cout<<"Enter the Negative Number : ";
        cin>>number;
        number = number * (-1);
        cout<<"The Positive form of the Number : ";
        cout<<number ;
        
        
        break;
     
        
    }
    return 0;

} 

		
		