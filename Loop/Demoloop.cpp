// Demo of while loop

#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        cout<<"Hello,";

    }
    return 0;
}
// Output: Hello (it will come infinite time because condition under while always be true,1 stands for true)
//--------------------------------------------------------------------------------------------------------------------
// To solve this problem we need to initialize the int i and assign some value of i.

{
    int i=0;
    while(i<10)
    {
        cout<<"Hello,"; 
    }
    return 0;
}

//Output: Hello (Now, again it is coming infinite time Hello becsuse if we chech the condition the i=0 and also i<10. So,0<10 in other words loop will always be true according to this 'Hello' will print infinite time)

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// To solve this problem we need to increment operator i++.Let's see


{
    int i=0;
    while (i<10)
    {
        cout<<"Hello, ";
        i++;
    }
    return 0;
    
}
// Now, Expected output is coming.

//------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main()
{
    int i=0;
    do
    {
        cout<<i<<"Hello\n";
        i++; 
    } while(i<10);
    return 0;
    
}

{
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<"Hello\n";
    }
    return 0;
    
}

//-------------------
// Program for Infinite Loop

{
    int i=0;
    for(/*int i=0*/;i<10;i++)
    {
        cout<<i<<"Hello\n";
    }
    return 0;
}


//-----------------------------------------------------------------

// We also write this


{
    int i=0;
    //for(int i=0;i<10;i++)
    for(;i<10;)
    {
        cout<<i<<"Hello\n";
        i++;
    }
    return 0;
}


//--------------------------------------------------
//But we can't do like this because here infinite loop will work.
{
   // for (int i = 0; i < 10; i++)
   int i=0;
    for (; ; )
    {
        cout<<i<<"Hello\n";
         i++;   
    }
    
}
//Output: Infinite loop 

















