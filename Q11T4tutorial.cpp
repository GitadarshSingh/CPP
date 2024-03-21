//T4 Tutorial Practic Problem
//Question : 11

//C++  Program to take a value from the user as input the basic salary of an employee and calculate its 
//Gross salary according to the following: Basic Salary <= 10000: HRA = 20%, DA = 80%………………………………..
//Basic Salary <= 20000 : HRA = 25%, DA = 90%………………………………Basic Salary > 20000 : HRA = 30%, DA = 95%.

#include<iostream>
using namespace std ;
int main ()
{
    int Basic_Salary , HRA , DA , Gross_Salary ;
    cout<<"Enter the Basic Salary : ";
    cin>>Basic_Salary;

   if(Basic_Salary <= 10000)
   {
     HRA = 0.2 * Basic_Salary;
     DA = 0.8 * Basic_Salary;

     
    // Gross_Salary =  Basic_Salary + HRA + DA ;
     //cout<<"Gross_Salary : "<<Gross_Salary<<endl;
   }
   else if (Basic_Salary <= 20000)
   {
    HRA = 0.25 * Basic_Salary;
    DA = 0.9 * Basic_Salary;

    
    //Gross_Salary =  Basic_Salary + HRA + DA ;

    //cout<<"Gross_Salary : "<<Gross_Salary<<endl;

   }
   else if (Basic_Salary > 20000)
   {
    HRA = 0.3 * Basic_Salary;
    DA = 0.95 * Basic_Salary;

    
    //Gross_Salary =  Basic_Salary + HRA + DA ;

    //cout<<"Gross_Salary : "<<Gross_Salary<<endl;

   }

   Gross_Salary =  Basic_Salary + HRA + DA ;
   cout<<"Gross_Salary : "<<Gross_Salary<<endl;
   
   return 0 ;
}