#include<bits/stdc++.h>

using namespace std;
int main()
{
    float x1 , y1 , x2 , y2 ;
    int D ;
     cout<<"Enter the diastance between the two points x1y1 and x2y2 ";
     cin>>x1>>y1>>x2>>y2;

     D = sqrt(pow((x2-x1),2) + (pow (y2-y1),2)) ;

     cout<<"Enter the distance "<<D<<endl;

     return 0;



}