// from T4tutorials problem practice
//Question: 20
//Write a program that determines a student’s grade. The program will read three types
// of scores (quiz, mid-term, and final scores) and determine the grade based 
//on the following rules:if the average score =90% =>grade=A…………………..-
//if the average score >= 70% and <90% => grade=B……………………-
//if the average score>=50% and <70% =>grade=C……………………..-
//if the average score<50% =>grade=F

#include<iostream>
using namespace std;
int main()
{
    int quiz , mid_term , final_score , Average_Score , Total_Score ;
    float  Percentage ;

    cout<<"Enter Quiz Marks : ";
    cin>>quiz;
    
    cout<<"Enter Mid-term Marks : ";
    cin>>mid_term;

    cout<<"Enter final score Marks : ";
    cin>>final_score; 

    Total_Score = quiz + mid_term + final_score  ;
    Average_Score = Total_Score / 3 ;
    //Percentage = Average_Score /300 * 100 ;

    //static_cast<int>(Percentage)

    switch(Average_Score)
    {
        case 90 : cout<<"Grade A "<<endl;
        break ;

        case 89 :
        case 88 :
        case 87 :
        case 86 :
        case 85 :
        case 84 :
        case 83 :
        case 82 :
        case 81 :
        case 80 :  
        case 79 :   
        case 78 :   
        case 77 :   
        case 76 :   
        case 75 :   
        case 74 :   
        case 73 :   
        case 72 :   
        case 71 :   
        case 70 :   cout <<"Grade B "<<endl;
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
        case 60 :
        case 59 :
        case 58 :
        case 57 :
        case 56 :
        case 55 :
        case 54 :
        case 53 :
        case 52 :
        case 51 :
        case 50 :  cout<<"Grade C "<<endl;
        break ;

        default : cout << "Grade F"<<endl;
        break ;
        
    }
 
  //cout<<"Percentage : "<<Percentage<< "%" <<endl;

   return 0 ;

}