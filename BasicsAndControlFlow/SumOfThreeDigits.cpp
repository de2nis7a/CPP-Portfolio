//SumOfThreeDigits.cpp

#include <iostream>
using namespace std;

//Reads a three-digit natural number and calculates the sum of its digits.

int main() {
    int n;
    cout << "Enter a three-digit number: ";
    cin >> n;

    int units = n % 10;           // Units digit
    int tens = (n / 10) % 10;     // Tens digit
    int hundreds = (n / 100) % 10; // Hundreds digit

    int sum = units + tens + hundreds;
    cout << "Sum of digits: " << sum << endl;

    return 0;
}