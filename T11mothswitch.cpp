 // T4tutorials problem practice of switch case.

 //Question 11:
 //C++  Program to take the value from the user as input the month number and print number of days in that month. Using switch statement
 #include<iostream>
 using namespace std;
 int main()
 {
    int months ;
    cout<<"Enter the months number : ";
    cin>>months;

    switch(months)
    {
        case 1 :
        case 3 :
        case 5:
        case 7 :
        case 8 :
        case 9 :
        case 11 : cout<<"Month ends with 31 days. "<<endl;
        break;

        case 4 :
        case 6 :
        case 10 : cout<<"Month ends with 30 days."<<endl;
        break;

        default : cout<<"Month ends with 28 days except leap year."<<endl;
        break;
    }
    return 0;
 }
