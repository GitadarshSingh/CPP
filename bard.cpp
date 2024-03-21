#include <iostream>

using namespace std;

int main() {
  float physics, chemistry, mathematics, biology, computer, marks, percentage;
  char grade;

  // Input the marks of five subjects
  cout << "Enter the Marks Of the Student : ";
  cin >> physics >> chemistry >> mathematics >> biology >> computer;

  // Calculate the percentage
  marks = physics + chemistry + mathematics + biology + computer;
  percentage = marks / 500 * 100;

  // Print the percentage
  cout << "Percentage : " << percentage << "%" << endl;

  // Check if the percentage is between 90 and 100
  switch (percentage) {
  case 90 ... 100:
    cout << "Grade A" << endl;
    break;

  case 80 ... 90:
    cout << "Grade B" << endl;
    break;

  case 70 ... 80:
    cout << "Grade C" << endl;
    break;

  case 60 ... 70:
    cout << "Grade D" << endl;
    break;

  case 40 ... 60:
    cout << "Grade E" << endl;
    break;

  default:
    cout << "Invalid grade " << endl;
  }

  return 0;
}