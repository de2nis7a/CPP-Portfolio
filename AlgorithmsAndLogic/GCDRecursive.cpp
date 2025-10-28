// GCDRecursive.cpp

#include <iostream>
using namespace std;

// This program defines a recursive function to compute the Greatest Common Divisor (GCD) of two integers passed as parameters
// It uses the subtraction-based Euclidean algorithm.

 int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two natural numbers: ";
    cin >> a >> b;
    cout << "GCD: " << gcd(a, b) << endl;
    return 0;
}