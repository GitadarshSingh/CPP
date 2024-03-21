// from T4tutorials problem practice
//Question :23

//Write a program to swap the values of two numbers. if the values of
// both variables are not the same using a switch statement .
#include<iostream>
using namespace std;
int main()
{
    int numbers ;
    int a = 10 ;
    int b = 15 ;
    int temp ;

    cout<< "Before Swap  : "<<a<<" , "<<b<<endl;
    
    switch (true)
    {
        case 1 : temp = a ;
        a = b ;
        b = temp ;

        cout <<"After Swap : "<<a<<" , "<<b<<endl;
    

       
    }
    return 0;
}