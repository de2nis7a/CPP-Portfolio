//ControlDigit.cpp

#include <iostream>
using namespace std;

// This program reads a number and calculates its control digit (digit sum modulo 9, with 9 as special case).

int main() {
    int n, controlDigit;
    cin >> n;

    if (n % 9 == 0)
        controlDigit = 9;
    else
        controlDigit = n % 9;

    cout << controlDigit;
    return 0;
}
