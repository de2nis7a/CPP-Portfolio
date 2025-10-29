//MaxDigitSumTwoDigits.cpp

// This program reads three two-digit natural numbers and displays those with the maximum sum of digits.

#include <iostream>
using namespace std;

// Function to calculate sum of digits of a number

int SumOfDigits(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int v[4], maxi = 0;
    
    // Reading three numbers

    for (int i = 1; i <= 3; i++) {
        cin >> v[i];
        if (SumOfDigits(v[i]) > maxi)
            maxi = SumOfDigits(v[i]);
    }

    // Display numbers with the maximum sum of digits
    
    for (int i = 1; i <= 3; i++)
        if (SumOfDigits(v[i]) == maxi)
            cout << v[i] << " ";

    return 0;
}
