//T4 tutorial Switch exercise.

//Question : 17
//Using switch statement  C++  Program to take the value from the user as input marks of five subjects Physics,
//Chemistry, Biology, Mathematics, and Computer. Calculate percentage and grade according to the following:
//Percentage >= 90% : Grade A, Percentage >= 80% : Grade B, Percentage >= 70% : Grade C, Percentage >= 60% : 
//Grade D, Percentage >= 40% : Grade E, Percentage < 40% :
//Grade F, Using switch statement.

//solution: Hint
//In C++, static_cast is a way to convert a value from one type to another. 

#include<iostream>
using namespace std;
int main()
{
    int  Physics , Chemistry, Biology, Mathematics,  Computer ,Grade , Percentages , Total_Marks ;
    cout<<"Enter the Physics Marks : ";
    cin>>Physics;

    cout<<"Enter the Chemistry Marks : ";
    cin>>Chemistry ;

    cout<<"Enter the Biology Marks : ";
    cin>>Biology;

    cout<<"Enter the Biology Marks : ";
    cin>>Mathematics;

    cout<<"Enter the Computer Marks : ";
    cin>>Computer;

    Total_Marks = Physics + Chemistry + Biology + Mathematics +  Computer + Grade ;

    Percentages = Total_Marks / 500 * 100 ;

    switch(static_cast<int>(Percentages))
    {
        case  100 :
        case  99 :
        case  98 :
        case  97 :
        case  96 :
        case  95 :
        case  94 :
        case  93 :
        case  92 :
        case  90 : cout<<"Grade A "<<endl ;
        break ;

        case 89 :
        case 88 :
        case 87:
        case 86 :
        case 85 :
        case 84 :
        case 83 :
        case 82 :
        case 81 :
        case 80 : cout<<"Grade B "<<endl ;
        break ; 

        case 79  :
        case 78 :
        case 76  :
        case 75  :
        case 74  :
        case 73  :
        case 72  :
        case 77  :
        case 71  :
        case 70 : cout<<"Grade C "<<endl ;
        break ;

        case 69 :
        case 68 :
        case 67 :
        case 66 :
        case 65 :
        case 64 :
        case 63 :
        case 62 :
        case 61 :
        case 60 : cout<<"Grade D "<<endl ;
        break ;
   
        case 59 :  
        case 58 :  
        case 57 :  
        case 56 :  
        case 55 :  
        case 54 :  
        case 53 :  
        case 52 :  
        case 51 :  
        case 50 : 
        case 49  : 
        case 48  : 
        case 47  : 
        case 46  : 
        case 45  : 
        case 44  : 
        case 43  : 
        case 42  : 
        case 41  : 
        case 40 : cout<<"Grade E "<<endl ;
        break ;
        

        default : cout<<"Fail"<<endl;
        break;

    }

    cout<<"Percentages : "<<Percentages<<"%" <<endl;
    
   
    return 0;
    
    
    
}