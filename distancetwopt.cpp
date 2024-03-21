#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float x1 , y1 , x2 , y2 ;
    float D ;
     cout<<"Enter the distance between the two points  ";
     cin>>x1>>y1>>x2>>y2;

     D = sqrt((pow(x2-x1),2) + (pow (y2-y1),2)) ;

     cout<<"Enter the distance"<<D<<endl;

     return 0;



}