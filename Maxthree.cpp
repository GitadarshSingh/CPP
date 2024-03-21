#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter the Numbers : ";
    cin >> x >> y >> z;

    int max;

    if (x > y) {
        if (x > z) {
            max = x;
        } else {
            max = z;
        }
    } else {
        if (y > z) {
            max = y;
        } else {
            max = z;
        }
    }

    switch (max) {
        case 0: // Placeholder case
            cout << "No maximum value found";
            break;

        case 1:
            cout << "x is the maximum";
            break;

        case 2:
            cout << "y is the maximum";
            break;

        case 3:
            cout << "z is the maximum";
            break;
    }

    return 0;
}
