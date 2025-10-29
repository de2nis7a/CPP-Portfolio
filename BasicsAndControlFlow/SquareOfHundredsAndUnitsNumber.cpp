//SquareOfHundredsAndUnitsNumber.cpp

#include <iostream>
using namespace std;

//Reads a three-digit natural number and calculates the square of the number formed by its hundreds and units digits.

int main() {
    int n;
    cin >> n;

    int hundreds = n / 100;
    int units = n % 10;

    int formed = hundreds * 10 + units;
    cout << formed * formed;

    return 0;
}