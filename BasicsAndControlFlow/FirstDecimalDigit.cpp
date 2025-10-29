//FirstDecimalDigit.cpp

#include <iostream>
using namespace std;

// This program reads a real number and prints the first digit after the decimal point.

int main() {
    double a;
    cin >> a;
    int b = a * 10;
    cout << b % 10;
    return 0;
}
