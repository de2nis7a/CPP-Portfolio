//ProductOfHundredsAndUnits.cpp

#include <iostream>
using namespace std;

//Reads a three-digit natural number and computes the product of the hundreds and units digits.

int main() {
    int n;
    cin >> n;

    int units = n % 10;
    int hundreds = n / 100;

    cout << units * hundreds;
    return 0;
}