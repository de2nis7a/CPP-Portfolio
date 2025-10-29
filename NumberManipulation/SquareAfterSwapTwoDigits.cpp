//SquareAfterSwapTwoDigits.cpp

#include <iostream>
using namespace std;

// This program reads a two-digit natural number, swaps its digits, 
// calculates the square of the new number, and prints it.

int main() {
    int a, square, tens, units;
    cin >> a;

    units = a % 10;         // units digit
    tens = a / 10;          // tens digit

    a = units * 10 + tens;  // swapped number
    square = a * a;         // square of swapped number

    cout << square;

    return 0;
}
