#include<iostream>
using namespace std;
int main()
{
    int number1,number2, sum = 0;
    cout<<"Enter the number  number1  and number2 : ";
    cin>>number1>>number2;
    
    sum = number1 + number2;
    

    while(number<=10)
    {
        
        cout<<sum<<endl;
    }
    return 0;
}
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int number, digit, sum = 0;
//
//    // Input: Get a positive integer from the user
//    cout << "Enter a positive integer: ";
//    cin >> number;
//
//    // Validate if the entered number is positive
//    if (number < 0) {
//        cout << "Please enter a positive integer." << endl;
//        return 1;  // Exit the program with an error code
////    }
////
  //  // Calculate the sum of digits using a while loop
  //  while (number > 0)
  //  {
  //      digit = number % 10;   // Extract the last digit
  //      sum += digit;          // Add the digit to the sum
  //      number /= 10;          // Remove the last digit from the number
  //  }
//
  //  // Output: Display the sum of digits
  //  cout << "Sum of digits: " << sum << endl;
//
  //  return 0;
//}
//