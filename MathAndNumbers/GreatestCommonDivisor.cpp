//GreatestCommonDivisor.cpp

#include <iostream>
using namespace std;

// This program reads two natural numbers and calculates their greatest common divisor (GCD).

int main() {
    long long a, b, r;
    cin >> a >> b;

    if (a == 0 && b == 0)
        cout << -1; // Undefined GCD
    else if (b == 0)
        cout << a;
    else {
        do {
            r = a % b;
            a = b;
            b = r;
        } while (r != 0);
        cout << a;
    }

    return 0;
}
