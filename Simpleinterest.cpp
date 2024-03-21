#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A , p , r , t ;

    cout<<"Enter the principle amount , rate and time : " ;
    cin>>p>>r>>t;

    A = p * ( 1 + r*t ) ;

    cout<<A<<endl;

    return 0;
     
}
