//SumOfSquaresOfDigits.cpp

#include <iostream>
using namespace std;

//Reads a three-digit natural number and calculates the sum of the squares of its digits.

int main() {
    int n;
    cin >> n;

    int units = n % 10;
    int tens = (n / 10) % 10;
    int hundreds = (n / 100) % 10;

    cout << (units * units) + (tens * tens) + (hundreds * hundreds);
    return 0;
}