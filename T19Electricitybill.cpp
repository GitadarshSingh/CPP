//T4 Tuturial Problem solvig for Electricity BillE
//Quesion 19 :
//C++  Program to take the value from the user as input electricity unit charges and calculate total electricity bill 
//according to the given condition: For the first 50 units Rs. 0.50/unit………….For the next 100 units Rs. 0.75/unit…..
//For the next 100 units Rs. 1.20/unit ……………
//For unit above 250 Rs. 1.50/unit………An additional surcharge of 20% is added to the bill…….
//Using the switch statement


#include <iostream>
using namespace std;

int main() {
    double units, totalBill;
    
    cout << "Enter the electricity units consumed: ";
    cin >> units;
    
    int range = static_cast<int>(units); // Convert to integer for switch
    
    switch (range) {
        case 0 ... 50:
            totalBill = units * 0.50;
            break;
        case 51 ... 150:
            totalBill = 50 * 0.50 + (units - 50) * 0.75;
            break;
        case 151 ... 250:
            totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
            break;
        default:
            totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    
    // Adding surcharge of 20%
    totalBill *= 1.20;
    
    cout << "Total electricity bill: Rs. " << totalBill << endl;
    
    return 0;
}

	