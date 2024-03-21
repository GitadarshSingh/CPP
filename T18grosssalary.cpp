//T4 Tutorial Practice Problem
// Question 18 :
// C++  Program to take the value from the user as input the basic salary of an employee and
// calculate its Gross salary according to the following: Basic Salary <= 10000: HRA = 20%, DA = 80%…………………
//………..Basic Salary <= 20000 : HRA = 25%, DA = 90%………………………………Basic Salary > 20000 : HRA = 30%, DA = 95%
// Example : bs = 5000 , hra ,1000 , da = 4000; GrossSalary = 10,000
#include <iostream>
using namespace std;

int main()
{
    int BasicSalary, hra , da , GrossSalary ;
    cout<<"Enter Basic Salary : ";
    cin>>BasicSalary;

    switch(1)
    {
        case 1 :
         if(BasicSalary <= 10000)
         {
            hra = BasicSalary * 20 * 1/100 ;
            da = BasicSalary * 80 * 1/100;
         }
         else if (BasicSalary <= 20000)
         {
            hra = BasicSalary * 25 * 1 /100 ;
            da = BasicSalary * 90 * 1/ 100;
         }
         else if (BasicSalary>20000)
         {
             hra = BasicSalary * 30 * 1/100;
             da = BasicSalary * 95 *1/100;
         }
         else
         
         
         break;
    }
    GrossSalary = BasicSalary + hra  + da ;

    cout<<"GrossSalary : "<<GrossSalary<<endl;

    return 0;

   
   

}
