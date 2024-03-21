#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes500, notes200, notes100, notes50, notes20, notes10, notes5, notes2, notes1;
    notes500 = notes200 = notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = notes1 = 0;

    while (amount > 0)
    {
    switch (amount >= 500) 
    {
     case true:
                notes500++;
                amount -= 500;
                break;
     case false:

                
     switch (amount >= 200)
     {
     case true:
        notes200++;
        amount -= 200;
        break;

     case false:
     switch (amount >= 100) 
     {
     case true:
     notes100++;
     amount -= 100;
     break;
    case false:


    switch (amount >= 50) 
    {
    case true:
    notes50++;
    amount -= 50;
    break;
    case false:
    

    switch (amount >= 20) 
    {
    case true:
    notes20++;
    amount -= 20;
    break;
    case false:


    switch (amount >= 10) 
    {
    case true:
    notes10++;
        amount -= 10;
        break;
    case false:


    switch (amount >= 5) 
    {
            case true:
                notes5++;
                amount -= 5;
                break;
            case false:


    switch (amount >= 2) 
    {
                    case true:
                        notes2++;
                        amount -= 2;
                        break;
                    default:
                        notes1++;
                        amount -= 1;
                  }
               }
                                               
             }
           }
        }
     }
  }
}

    cout << "Total number of notes:\n";
    cout << "500: " << notes500 << " notes\n";
    cout << "200: " << notes200 << " notes\n";
    cout << "100: " << notes100 << " notes\n";
    cout << "50: " << notes50 << " notes\n";
    cout << "20: " << notes20 << " notes\n";
    cout << "10: " << notes10 << " notes\n";
    cout << "5: " << notes5 << " notes\n";
    cout << "2: " << notes2 << " notes\n";
    cout << "1: " << notes1 << " notes\n";

    return 0;
}
