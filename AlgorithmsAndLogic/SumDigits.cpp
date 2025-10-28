// SumDigits.cpp

#include <iostream>
using namespace std;

// This function calculates and returns the sum of the digits of a given natural number recursively.

int sumDigits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sumDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "Sum of digits: " << sumDigits(num) << endl;
    return 0;
}