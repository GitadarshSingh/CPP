#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the 2 numbers : "<<endl;
    
    cin>>m>>n;
 
   while (m!=n){
    if (m>n)
        m = m - n ;
    else if (n>m)
        n = n - m ;
   }
   cout<<"GCD  m and n both is: "<< n << "and" << m;
   return 0 ;
    
} 
