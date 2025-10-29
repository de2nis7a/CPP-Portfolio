//SumOfDigits.cpp

#include <iostream>
using namespace std;

// This program reads a natural number and calculates the sum of its digits.

int main() {
    int x, uc, sum = 0;
    cin >> x;

    while (x > 0) {
        uc = x % 10;    // extract last digit
        sum += uc;      // add it to the sum
        x /= 10;        // remove last digit
    }

    cout << sum;
    return 0;
}
