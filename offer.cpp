#include<iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"Enter age : " ;
    cin>>age;

    if (age>=12 && age<=21 || age >= 50)
    {
        cout<<"Child or Old , and he is eligible for offer : " ;
    }
    
    else
    {
        cout<<"Not Eligible for offer : " ;
    }

    return 0;
}