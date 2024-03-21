// from T4tutorials problem practice
//Question: 1
//Using switch statement Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F

#include<iostream>
using namespace std;
int main()
{
    float physics , chemistry , mathematics , biology , computer , marks ,percentage   ;
    char grade ;
    cout<<"Enter the Marks Of the Student : ";
    cin>>physics>>chemistry>>mathematics>>biology>>computer;

    //calculate the percentage 
    marks = physics+chemistry+mathematics+biology+computer ;
    percentage = marks / 500 * 100 ;

    cout<<"Percentage : "<< percentage<<'%'<< endl;

     int range = static_cast<int>(percentage);

    switch (range)
    {
        case 100 :
        case 99 :
        case 98 :
        case 97 :
        case 96 :
        case 95 :
        case 94 :
        case 93 :
        case 92 :
        case 91 :
        case 90 :
                cout<<"Grade A"<<endl;
                break;
        case 71 :
        case 80 :
                cout<<"Grade B"<<endl;
                break;

        case 70 : 
                 cout<<"Grade C"<<endl;
                 break;
                 
        case 65 :
        case 60 : 
                cout<<"Grade D"<<endl;
                break;

        case 40 :
                cout<<"Grade E"<<endl;
                break;


        default : cout<<"Invalid grade ";
    }

    return 0;
}