#include<iostream>
using namespace std;

int main()
{
    int n, r, sum = 0, m; 

    cout << "Enter N: ";
    cin >> n;

    // Store the original value of n
     m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }

    if (sum == m) cout << "Armstrong";
    else cout << "Not Armstrong";

    return 0;
}
