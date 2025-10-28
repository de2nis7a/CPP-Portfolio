// ConcatenateNumbers.cpp

#include <iostream>
using namespace std;

// Function to concatenate two natural numbers
// The function takes two integers as input and returns a single integer
// representing the digits of the first number followed by the digits of the second number

int concatenate(int a, int b) {
    int cb = b;
    while (cb > 0) {
        a = a * 10;
        cb /= 10;
    }
    a += b;
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two natural numbers: ";
    cin >> num1 >> num2;
    cout << "Concatenated number: " << concatenate(num1, num2) << endl;
    return 0;
}
